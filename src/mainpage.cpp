#include "mainpage.h"
#include "images.h"
#include "drawing.h"
#include "fonts/font.h"
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

#define BUTTON_HEIGHT 40
#define BUTTON_WIDTH 53
#define BUTTON_MARGIN 5
#define BUTTONS_TOP_2 (320 - BUTTON_MARGIN - BUTTON_HEIGHT)
#define BUTTONS_TOP_1 (BUTTONS_TOP_2 - BUTTON_HEIGHT - BUTTON_MARGIN)

#define AXIS_SPACING 50
#define AXIS_X 5
#define AXIS_Y (AXIS_X + AXIS_SPACING)
#define AXIS_Z (AXIS_Y + AXIS_SPACING)

void MainPage::draw()
{
    drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 0, BUTTONS_TOP_1, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 1, BUTTONS_TOP_1, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 2, BUTTONS_TOP_1, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 3, BUTTONS_TOP_1, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);

    drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 0, BUTTONS_TOP_2, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 1, BUTTONS_TOP_2, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 2, BUTTONS_TOP_2, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 3, BUTTONS_TOP_2, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);

    // drawIntNumber(tft, 25, 5, 12340, 6);
    // drawIntNumber(tft, 25, 5 + 40, value, 6);
    // drawIntNumber(tft, 25, 5 + 40 + 40, 0, 6);

    setFont(font_manolomono_25, font_manolomono_map_25);

    drawChar(tft, 10, AXIS_X, 'X');
    drawChar(tft, 10, AXIS_Y, 'Y');
    drawChar(tft, 10, AXIS_Z, 'Z');

    setFont(font_7seg_32, font_7seg_map_32);

    drawFloatNumber(tft, 30, AXIS_X, state.getPos(Axis::X), 8);
    drawFloatNumber(tft, 30, AXIS_Y, state.getPos(Axis::Y), 8);
    drawFloatNumber(tft, 30, AXIS_Z, state.getPos(Axis::Z), 8);
}
