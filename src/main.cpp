#include <Arduino.h>
#include <HardwareSerial.h>
#include <Wire.h>
#include "screen.h"
#include "wifi.h"
#include "serial.h"
#include "mainpage.h"
#include "wheel.h"
#include "PCA9536D.h"
#include "buttons.h"

#define SDA_PIN D3
#define SCL_PIN D4
#define I2C_CLOCK 400000
#define LCD_BACKLIGHT_PIN 3

Touch touch(Wire);
Screen screen(touch);
WiFiCommmunicator wifiCommmunicator;
SerialCommunicator serialCommunicator;
MainPage mainPage;
Wheel wheel(Wire);
PCA9536 pca9536d;
Buttons buttons(pca9536d);

void setup()
{
    setupSerial();
    setupWatchdog();
    setupTwoWire();

    wheel.begin();
    touch.begin();
    screen.setCurrentPage(&mainPage);

    pca9536d.begin(Wire);
    if (pca9536d.isConnected())
    {
        Serial.println("PCA9536 connected");
        // pca9536d.pinMode(0, OUTPUT); NC
        pca9536d.pinMode(LCD_BACKLIGHT_PIN, OUTPUT);
        // pca9536d.write(0, LOW);
        // pca9536d.write(1, LOW); bt btnn
        // pca9536d.write(2, LOW);
        pca9536d.write(LCD_BACKLIGHT_PIN, LOW);
        pca9536d.write(LCD_BACKLIGHT_PIN, HIGH);
    } else
    {
        Serial.println("PCA9536 not connected");
    }

    screen.begin();
    screen.loop();
    pca9536d.write(LCD_BACKLIGHT_PIN, LOW);
    buttons.begin();
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
        buttons.loop();
        wifiCommmunicator.loop();
        serialCommunicator.loop();

        lastTime = millis();
    }
}
