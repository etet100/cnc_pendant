#include <Arduino.h>
#include <HardwareSerial.h>
#include <Wire.h>
#include "screen.h"
#include "wifi.h"
#include "serial.h"
#include "mainpage.h"
#include "wheel.h"
#include "state.h"
#include "PCA9536D.h"
#include "buttons.h"
#include "images.h"
#include "drawing.h"

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

#define LOGO_PART_WIDTH 40
#define LOGO_PART_HEIGHT 33
#define LOGO_TOP 59

void logo()
{
    const uint16_t* images[] = {
        image_logo00,
        0,
        image_logo10,
        image_logo01,
        0,
        image_logo20,
        image_logo11,
        image_logo02,
        0,
        image_logo30,
        image_logo21,
        image_logo12,
        image_logo03,
        0,
        image_logo40,
        image_logo31,
        image_logo22,
        image_logo13,
        image_logo04,
        0,
        image_logo50,
        image_logo41,
        image_logo32,
        image_logo23,
        image_logo14,
        image_logo05,
        0,
        image_logo51,
        image_logo42,
        image_logo33,
        image_logo24,
        image_logo15,
        0,
        image_logo52,
        image_logo43,
        image_logo34,
        image_logo25,
        0,
        image_logo53,
        image_logo44,
        image_logo35,
        0,
        image_logo54,
        image_logo45,
        0,
        image_logo55,
        (uint16_t*)1
    };

    int x0 = 0, x = x0;
    int y0 = LOGO_TOP, y = y0;

    const uint16_t** image = images;
    while (*image != (uint16_t*)1) {
        if (*image == 0) {
            delay(30);
            image++;
            if (x0 < 240 - LOGO_PART_WIDTH) {
                x0 += LOGO_PART_WIDTH;
            } else {
                y0 += LOGO_PART_HEIGHT;
            }
            x = x0;
            y = y0;
            continue;
        }

        drawImage(&screen.getTFT(), x, y, *image, LOGO_PART_WIDTH, LOGO_PART_HEIGHT);
        y += LOGO_PART_HEIGHT;
        x -= LOGO_PART_WIDTH;

        image++;
    }

    delay(1000);
}

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

    logo();
    screen.setCurrentPage(&mainPage);
    screen.clear();

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
        wheel.loop();
        state.setPos(X, wheel.getPosition());
        state.setPos(Y, wheel.getSpeed());

        lastTime = millis();
    }
}
