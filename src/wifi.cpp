#include "wifi.h"
#include "ESPAsyncTCP.h"
#include <Arduino.h>
//#include <ArduinoJson.h>
#include "../config.h"
#include "state.h"
#include <CircularBuffer.hpp>

const char *ssid = WIFI_SSID;
const char *password = WIFI_PASSWORD;

static void handleData(void* arg, AsyncClient* client, void *data, size_t len) {
    static CircularBuffer<uint8_t, 128> buffer;
    static uint8_t packetType = 255;
    static uint8_t packetSize;

	Serial.printf("\n data received from %s \n", client->remoteIP().toString().c_str());

    uint8_t* dataPtr = (uint8_t*)data;
    while (len--) {
        buffer.push(*dataPtr++);
    }

    while (buffer.size()) {
        if (packetType == 255) {
            while (buffer.size() >= sizeof(HeaderMessage)) {
                if (
                    buffer[0] != 0x55 || buffer[1] != 0xAA  ||
                    buffer[3] /* type */ >= (uint8_t)PacketType::MAX || buffer[2] /* size */ > MAX_PACKET_SIZE
                ) {
                    buffer.shift();
                    break;
                }

                packetType = buffer[3];
                packetSize = buffer[2];
                break;
            }
        }

        if (packetType < 255 && buffer.size() >= packetSize) {
            switch (packetType) {
                case (uint8_t)PacketType::STATE:
                    StateMessage msg;
                    uint8_t* msgPtr = (uint8_t*)&msg;
                    while (packetSize--) {
                        *msgPtr++ = buffer.shift();
                    }
                    Serial.println(msg.header.size);
                    Serial.println(msg.header.start);
                    Serial.println(msg.x);
                    Serial.println(msg.y);
                    break;
            }

            packetType = 255;
            continue;
        }

        return;
    }
}

WiFiCommmunicator::WiFiCommmunicator() : commState(WIFI_DISCONNECTED)
{
    client.onData(&handleData);
	//client.onConnect(&onConnect);
    client.onConnect([this](void* arg, AsyncClient* client) {
        Serial.println("connected");
        this->commState = WIFI_CONNECTED_TO_SERVER;
    });
    client.onDisconnect([this](void* arg, AsyncClient* client) {
        Serial.println("disconnected");
        this->commState = WIFI_IP;
    });
    client.onTimeout([](void* arg, AsyncClient* client, uint32_t time) {
        Serial.println("timeout");
        //client->close();
    });
}

WiFiCommmunicator::~WiFiCommmunicator()
{
    WiFi.onStationModeGotIP(nullptr);
    WiFi.onStationModeConnected(nullptr);
}

bool WiFiCommmunicator::isConnected()
{
    return this->commState == WIFI_CONNECTED_TO_SERVER;
}

void WiFiCommmunicator::begin()
{
    Serial.println("Initializing WiFi...");

    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);

    wifiGotIPHandler = WiFi.onStationModeGotIP([this](const WiFiEventStationModeGotIP &event) {
        Serial.print("WiFi, IP: ");
        Serial.println(WiFi.localIP());

        this->connect();
    });
    wifiConnectedHandler = WiFi.onStationModeConnected([this](const WiFiEventStationModeConnected &event) {
        this->commState = WIFI_CONNECTED;
        Serial.println(" WiFi, connected");
    });
    // WiFi.onStationModeConnected([](const WiFiEventStationModeConnected &event) {
    //     Serial.println(" WiFi, connected");
    // });

    Serial.println(" Result: initialized");
}

void WiFiCommmunicator::connect()
{
    this->client.connect("192.168.1.2", 5555);
    this->commState = WIFI_CONNECTING_TO_SERVER;
}

void WiFiCommmunicator::loop()
{
    if (this->commState == WIFI_IP) {
        this->connect();
    }

    static uint32_t lastTime = 0;

    if (millis() - lastTime >= 500)
    {
        if (this->commState == WIFI_CONNECTED_TO_SERVER)
        {
            // StateMessage msg;
            // state.fillStateMessage(msg);
            // client.write((const char *)&msg, sizeof(msg));

            // JsonDocument doc;
            // doc["x"] = state.getPos(X);
            // doc["y"] = state.getPos(Y);
            // doc["z"] = state.getPos(Z);
            // doc["s"] = this->commState;

            // std::string output;

            // serializeMsgPack(doc, output);
            //serializeJson(doc, output);

            // client.write(output.data(), output.length());
        }
    }
}

void WiFiCommmunicator::scanNetworks()
{
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
