#include "screen.h"
#include <HardwareSerial.h>
#include <Arduino.h>
#include "drawing.h"
#include "colors.h"

#define ADAGFX_PIN_CS       D8    // Display chip select
#define ADAGFX_PIN_DC       D2    // Display SPI data/command
#define ADAGFX_PIN_RST      D1    // Display Reset
#define SPI_FREQUENCY       30000000

Screen::Screen(Touch &touch) : tft(ADAGFX_PIN_CS, ADAGFX_PIN_DC, ADAGFX_PIN_RST), touch(touch)
{
    currentPage = nullptr;
}

void Screen::begin()
{
    Serial.println("Initializing screen...");

    tft.begin(SPI_FREQUENCY);
    tft.setRotation(2);

    clear();

    setTextColor(WHITE_ON_BLACK);

    Serial.println(" Result: initialized");
}

void Screen::loop()
{
    touch.loop();
    if (currentPage == nullptr) {
        return;
    }

    if (touch.isTouched()) {
        TS_Point touchPoint = touch.getPoint();
        Serial.write("Touch: ");
        Serial.print(touchPoint.x);
        Serial.print(", ");
        Serial.println(touchPoint.y);
        currentPage->processTouch(touchPoint.x, touchPoint.y);
    }
    currentPage->draw();
}

void Screen::clear()
{
    tft.fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, ILI9341_BLACK);
}

void Screen::setCurrentPage(BasePage *page) { 
    page->setTFT(&tft);
    currentPage = page; 
}
