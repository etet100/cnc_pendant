#include "mainpage.h"
#include "images.h"
#include "drawing.h"
#include "state.h"

static int value = 0;

MainPage::MainPage() : BasePage()
{
    addTouchZone(new TouchZone(5, 5, 240 - 10, 200));
}

void MainPage::processTouchZone(TouchZone* zone)
{
    Serial.println("Touched main page zone");
    value += rand() % 10;
    value *= rand() % 3;
    if (value > 999999) {
        value = 0;
    }
}

static uint16_t* image_btn1_() {
    static uint8_t im = 0;
    switch (im++ % 3) {
        case 0: return (uint16_t*)image_btn1;
        case 1: return (uint16_t*)image_btn2;
        case 2: return (uint16_t*)image_btn3;
    }
    return 0;
}

void MainPage::draw()
{
    drawImage(tft, 5, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 60, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 120, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 180, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);

    drawImage(tft, 5, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 60, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 120, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 180, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);

    // drawIntNumber(tft, 25, 5, 12340, 6);
    // drawIntNumber(tft, 25, 5 + 40, value, 6);
    // drawIntNumber(tft, 25, 5 + 40 + 40, 0, 6);

    drawChar(tft, 5, 5, 'X');
    drawChar(tft, 5, 5 + 40, 'Y');
    drawChar(tft, 5, 5 + 40 + 40, 'Z');

    drawFloatNumber(tft, 33, 5, state.getPos(Axis::X), 8);
    drawFloatNumber(tft, 33, 5 + 40, state.getPos(Axis::Y), 8);
    drawFloatNumber(tft, 33, 5 + 40 + 40, state.getPos(Axis::Z), 8);
}
