#include "wifi.h"
#include "ESPAsyncTCP.h"
#include <Arduino.h>
#include "../config.h"

const char *ssid = WIFI_SSID;
const char *password = WIFI_PASSWORD;

static void handleData(void* arg, AsyncClient* client, void *data, size_t len) {
	Serial.printf("\n data received from %s \n", client->remoteIP().toString().c_str());
	Serial.write((uint8_t*)data, len);

	// os_timer_arm(&intervalTimer, 2000, true); // schedule for reply to server at next 2s
}

// static void onConnect(void* arg, AsyncClient* client) {
// 	Serial.println("client connected");
// 	//replyToServer(client);
// }

WiFiCommmunicator::WiFiCommmunicator() : state(WIFI_DISCONNECTED)
{
    client.onData(&handleData);
	//client.onConnect(&onConnect);
    client.onConnect([this](void* arg, AsyncClient* client) {
        Serial.println("connected");
        this->state = WIFI_CONNECTED_TO_SERVER;
    });
    client.onDisconnect([this](void* arg, AsyncClient* client) {
        Serial.println("disconnected");
        this->state = WIFI_IP;
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
    return state == WIFI_CONNECTED_TO_SERVER;
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
        this->state = WIFI_CONNECTED;
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
    this->state = WIFI_CONNECTING_TO_SERVER;
}

void WiFiCommmunicator::loop()
{
    if (state == WIFI_IP) {
        this->connect();
    }

    // if (WiFi.status() != WL_CONNECTED) {
    //     state = WIFI_CONNECTING;
    // } else if (WiFi.status() == WL_CONNECTED && !wifiClient.connected()) {
    //     state = WIFI_CONNECTED;
    //     Serial.println("Connecting to 192.168.1.2");
    //     if (wifiClient.connect("192.168.1.2", 5555)) {
    //         this->state = WIFI_CONNECTED_TO_SERVER;
    //         Serial.println("Connected");
    //     } else {
    //         Serial.println("Connection failed");
    //     }
    // } else if (wifiClient.connected()) {
    //     //wifiClient.print("Hello, world!");
    //     wifiClient.setTimeout(1);
    //     if (wifiClient.available()) {
    //         String s = wifiClient.readString();
    //         Serial.println(s);
    //     }
    // }
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
