#include "wifi.h"
#include <Arduino.h>
#include "../config.h"

const char *ssid = WIFI_SSID;
const char *password = WIFI_PASSWORD;

WiFiCommmunicator::WiFiCommmunicator()
{
    connected = false;
}

WiFiCommmunicator::~WiFiCommmunicator()
{
    WiFi.onStationModeGotIP(nullptr);
    WiFi.onStationModeConnected(nullptr);
}

bool WiFiCommmunicator::isConnected()
{
    return connected;
}

void WiFiCommmunicator::begin()
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);

    wifiGotIPHandler = WiFi.onStationModeGotIP([this](const WiFiEventStationModeGotIP &event) {
        Serial.print("Station connected, IP: ");
        Serial.println(WiFi.localIP());

        connected = true;
        connecting = false;
    });
    wifiConnectedHandler = WiFi.onStationModeConnected([](const WiFiEventStationModeConnected &event) {
        Serial.println("Connected to WiFi");
    });
    WiFi.onStationModeConnected([](const WiFiEventStationModeConnected &event) {
        Serial.println("Connected to WiFi");
    });
}

void WiFiCommmunicator::loop()
{
    if (WiFi.status() == WL_CONNECTED && !wifiClient.connected()) {
        Serial.println("Connecting to 192.168.1.2");
        if (wifiClient.connect("192.168.1.2", 5555)) {
            connected = true;
            Serial.println("Connected");
        } else {
            Serial.println("Connection failed");
        }
    } else if (wifiClient.connected()) {
        //wifiClient.print("Hello, world!");
        wifiClient.setTimeout(1);
        if (wifiClient.available()) {
            String s = wifiClient.readString();
            Serial.println(s);
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

    connecting = true;
}
