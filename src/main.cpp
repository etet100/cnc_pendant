#include <Arduino.h>
#include <HardwareSerial.h>
#include <Wire.h>
#include "screen.h"
#include "wifi.h"
#include "serial.h"
#include "mainpage.h"
#include "wheel.h"

#define SDA_PIN D3
#define SCL_PIN D4
#define I2C_CLOCK 400000

Touch touch(Wire);
Screen screen(touch);
WiFiCommmunicator wifiCommmunicator;
SerialCommunicator serialCommunicator;
MainPage mainPage;
Wheel wheel(Wire);

void setup()
{
    setupSerial();
    setupWatchdog();
    setupTwoWire();

    wheel.begin();
    touch.begin();
    screen.begin();
    screen.setCurrentPage(&mainPage);
}

void setupSerial()
{
    Serial.begin(115200);
}

void setupTwoWire()
{
    Serial.println("Initializing I2C...");

    Wire.begin(SDA_PIN, SCL_PIN);
    Wire.setClock(I2C_CLOCK);
}

void setupWatchdog()
{
    Serial.println("Disabling watchdog...");

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
        serialCommunicator.loop();

        lastTime = millis();
    }
}
