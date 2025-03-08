#include "wirelesscommunicator.h"
#include "ESPAsyncTCP.h"
#include "Arduino.h"
#include "../config.h"
#include "state.h"
#include "circularbuffer.h"
#include <CRC.h>

const char *ssid = WIFI_SSID;
const char *password = WIFI_PASSWORD;

WirelessCommmunicator::WirelessCommmunicator() : commState(WIFI_DISCONNECTED) {
    client.onData([this](void* arg, AsyncClient* client, void *data, size_t len) {
        static uint8_t packetType = 255;
        static uint8_t packetSize;

        //Serial.printf("\n data received from %s \n", client->remoteIP().toString().c_str());

        if (buffer.free() < len) {
            Serial.println("Buffer overflow");
        } else {
            buffer.push((uint8_t*)data, len);
        }

        while (buffer.size()) {
            if (packetType == 255) {
                while (buffer.size() >= sizeof(Header)) {
                    if (
                        buffer[COMM_HEAD_START_1_POS] != COMM_START_BYTE_1 || buffer[COMM_HEAD_START_2_POS] != COMM_START_BYTE_2  ||
                        buffer[COMM_HEAD_TYPE_POS] >= (uint8_t)PacketType::MAX || buffer[COMM_HEAD_SIZE_POS] > COMM_MAX_PACKET_SIZE
                    ) {
                        buffer.skip(1);
                        continue;
                    }

                    packetType = buffer[COMM_HEAD_TYPE_POS];
                    packetSize = buffer[COMM_HEAD_SIZE_POS];
                    break;
                }
            }

            if (packetType < 255 && buffer.size() >= packetSize) {
                switch (packetType) {
                    case (uint8_t)PacketType::STATE: {
                        StateMessage msg;
                        buffer.get((uint8_t*)&msg, packetSize);
                        //Serial.printf("CRC: %d %d %d\n", msg.footer.crc, calcCRC8((uint8_t*)&msg, packetSize - sizeof(Footer)), packetSize);
                        if (msg.footer.crc != calcCRC8((uint8_t*)&msg, packetSize - sizeof(Footer))) {
                            Serial.printf("State CRC: %d != %d, %d", msg.footer.crc, calcCRC8((uint8_t*)&msg, packetSize - sizeof(Footer)), packetSize);
                            break;
                        }
                        //Serial.printf("State: %6.2f %6.2f %6.2f %d\n", msg.x, msg.y, msg.z, (int)msg.mode);

                        state.setPos(Axis::X, msg.x);
                        state.setPos(Axis::Y, msg.y);
                        state.setPos(Axis::Z, msg.z);
                        state.setMachineState(msg.machineState);
                        state.triggerUpdatedEvent();

                        this->updateLastMessageTime();
                        break;
                    }
                    case (uint8_t)PacketType::WIFI_CONFIG: {
                        WifiConfigMessage msg;
                        buffer.get((uint8_t*)&msg, packetSize);
                        //Serial.printf("CRC: %d %d %d\n", msg.footer.crc, calcCRC8((uint8_t*)&msg, packetSize - sizeof(Footer)), packetSize);
                        if (msg.footer.crc != calcCRC8((uint8_t*)&msg, packetSize - sizeof(Footer))) {
                            Serial.println("Wifi cfg CRC error");
                            break;
                        }
                        //Serial.printf("Wifi config: %s %s %s\n", msg.ssid, msg.password, msg.clientIp);

                        this->updateLastMessageTime();
                        break;
                    }
                    case (uint8_t)PacketType::PING: {
                        PingMessage msg;
                        buffer.get((uint8_t*)&msg, packetSize);
                        if (msg.footer.crc != calcCRC8((uint8_t*)&msg, packetSize - sizeof(Footer))) {
                            Serial.println("Ping CRC error");
                            break;
                        }
                        Serial.println("Ping");

                        this->updateLastMessageTime();
                        break;
                    }
                }

                packetType = 255;
                continue;
            }
        }
    });

	//client.onConnect(&onConnect);
    client.onConnect([this](void* arg, AsyncClient* client) {
        Serial.println("connected");
        this->setCommState(WIFI_CONNECTED_TO_SERVER);
    });

    client.onDisconnect([this](void* arg, AsyncClient* client) {
        Serial.println("disconnected");
        this->setCommState(WIFI_IP);
    });

    client.onTimeout([](void* arg, AsyncClient* client, uint32_t time) {
        Serial.println("timeout");
        //client->close();
    });
}

WirelessCommmunicator::~WirelessCommmunicator() {
    WiFi.onStationModeGotIP(nullptr);
    WiFi.onStationModeConnected(nullptr);
}

bool WirelessCommmunicator::isConnected() {
    return this->commState == WIFI_CONNECTED_TO_SERVER;
}

void WirelessCommmunicator::begin() {
    Serial.println("Initializing WiFi...");

    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);

    wifiGotIPHandler = WiFi.onStationModeGotIP([this](const WiFiEventStationModeGotIP &event) {
        Serial.print("WiFi, IP: ");
        Serial.println(WiFi.localIP());

        this->connect();
    });
    wifiConnectedHandler = WiFi.onStationModeConnected([this](const WiFiEventStationModeConnected &event) {
        this->setCommState(WIFI_CONNECTED);
        Serial.println(" WiFi, connected");
    });
    // WiFi.onStationModeConnected([](const WiFiEventStationModeConnected &event) {
    //     Serial.println(" WiFi, connected");
    // });

    Serial.println(" Result: initialized");
}

void WirelessCommmunicator::connect() {
    Serial.println("Connecting to server...");
    this->client.connect("192.168.1.2", 5555);
    this->setCommState(WIFI_CONNECTING_TO_SERVER);
}

void WirelessCommmunicator::disconnect() {
    this->client.close();
    this->setCommState(WIFI_IP);
}

void WirelessCommmunicator::updateLastMessageTime() {
    this->lastMessageTime = millis();
}

void WirelessCommmunicator::setCommState(WiFiCommmunicatorState state) {
    this->commState = state;
    eventManager.queueEvent(EventType::WiFiStateChanged, (int)state);
}

void WirelessCommmunicator::loop() {
    if (this->commState == WIFI_IP) {
        this->connect();
    }

    static uint32_t lastTime = 0;

    if (millis() - lastTime >= 500)
    {
        if (this->commState == WIFI_CONNECTED_TO_SERVER && millis() - this->lastMessageTime >= 2000)
        {
            Serial.println("Wifi timeout. Disconnecting...");
            this->disconnect();

            lastTime = millis();
        }
    }
}

void WirelessCommmunicator::scanNetworks() {
    String ssid;
    int32_t rssi;
    uint8_t encryptionType;
    uint8_t *bssid;
    int32_t channel;
    bool hidden;
    int scanResult = WiFi.scanNetworks();
    if (scanResult == 0)
    {
        Serial.println(F("No networks found"));
    }
    else if (scanResult > 0)
    {
        Serial.printf(PSTR("%d networks found:\n"), scanResult);

        // Print unsorted scan results
        for (int8_t i = 0; i < scanResult; i++)
        {
            WiFi.getNetworkInfo(i, ssid, encryptionType, rssi, bssid, channel, hidden);
            Serial.printf(PSTR("  %02d: [CH %02d] [%02X:%02X:%02X:%02X:%02X:%02X] %ddBm %c %c %s\n"), i, channel, bssid[0], bssid[1], bssid[2], bssid[3], bssid[4], bssid[5], rssi, (encryptionType == ENC_TYPE_NONE) ? ' ' : '*', hidden ? 'H' : 'V', ssid.c_str());

            yield();
        }
    }
    else
    {
        Serial.printf(PSTR("WiFi scan error %d"), scanResult);
    }
}
