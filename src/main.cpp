#include <Arduino.h>
#include <HardwareSerial.h>
#include <PolledTimeout.h>
#include <SPI.h>
#include <Wire.h>
#include "AS5600.h"
#include "../config.h"
#include "screen.h"
#include "wifi.h"
#include "wheel.h"

#define SDA_PIN D3
#define SCL_PIN D4

Touch touch(Wire);
Screen screen(touch);
WiFiCommmunicator wifiCommmunicator;
Wheel wheel(Wire);

void setup()
{
    setupSerial();
    setupWatchdog();
    setupTwoWire();

    wheel.begin();
    touch.begin();
    screen.begin();

    Serial.println();
    Serial.print("Wait for WiFi... ");
}

void setupSerial()
{
    Serial.begin(115200);
}

void setupTwoWire()
{
    Wire.begin(SDA_PIN, SCL_PIN); // join i2c bus (address optional for master)
    Wire.setClock(200000); // 400kHz I2C clock. Comment this line if having compilation difficulties
}

void setupWatchdog()
{
    ESP.wdtDisable();
    *((volatile uint32_t*)0x60000900) &= ~(1); // Disable hardware WDT
}

void loop()
{
    delay(5);

    static uint32_t lastTime = 0;

    if (millis() - lastTime >= 100)
    {
        screen.loop();
        wifiCommmunicator.loop();

        lastTime = millis();
    }
}
