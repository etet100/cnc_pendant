#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <HardwareSerial.h>
#include <PolledTimeout.h>
#include <SPI.h>
#include <Wire.h>
#include "../config.h"
#include "AS5600.h"

#define SDA_PIN D4
#define SCL_PIN D5

// const int16_t I2C_MASTER = 0x42;
// const int16_t I2C_SLAVE = 0x08;

const char *ssid = WIFI_SSID;
const char *password = WIFI_PASSWORD;

WiFiEventHandler wifiGotIPHandler;
WiFiEventHandler wifiConnectedHandler;

bool isWifiConnected = false;
bool isWifiConnecting = false;

AS5600 as5600(&Wire);

void setup()
{
    Serial.begin(115200);

    wifiGotIPHandler = WiFi.onStationModeGotIP([](const WiFiEventStationModeGotIP &event) {
        Serial.print("Station connected, IP: ");
        Serial.println(WiFi.localIP());

        isWifiConnected = true;
        isWifiConnecting = false;
    });
    wifiConnectedHandler = WiFi.onStationModeConnected([](const WiFiEventStationModeConnected &event) {
        Serial.println("Connected to WiFi");
    });
    

    //as5600.getAddress();

    Wire.begin(SDA_PIN, SCL_PIN); // join i2c bus (address optional for master)
    Wire.setClock(100000);        // 400kHz I2C clock. Comment this line if having compilation difficulties

    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);

    Serial.println();
    Serial.println();
    Serial.print("Wait for WiFi... ");

    // while (WiFi.status() != WL_CONNECTED)
    // {
    //     delay(500);
    //     Serial.print(".");
    // }

    // Serial.println("WiFi connected");

    as5600.begin();

    int b = as5600.isConnected();

    Serial.print("Connect: ");
    Serial.println(b);
}

void loop()
{
    if (!isWifiConnected && !isWifiConnecting)
    {
        scanNetworks();
        return;
    }

    Serial.println("Testing AS5600");

    static uint32_t lastTime = 0;

    if (millis() - lastTime >= 100)
    {
        lastTime = millis();
        Serial.print(as5600.getCumulativePosition());
        Serial.print("\t");
        Serial.println(as5600.getRevolutions());
    }

    // put your main code here, to run repeatedly:
    //Serial.println("Hello, world!");
    delay(500);

    // using periodic = esp8266::polledTimeout::periodicMs;
    // static periodic nextPing(1000);

    // if (nextPing)
    // {
    //     Wire.requestFrom(I2C_SLAVE, 6); // request 6 bytes from slave device #8

    //     while (Wire.available())
    //     {                         // slave may send less than requested
    //         char c = Wire.read(); // receive a byte as character
    //         Serial.print(c);      // print the character
    //     }
    // }
}

void scanNetworks()
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

    isWifiConnecting = true;
}
