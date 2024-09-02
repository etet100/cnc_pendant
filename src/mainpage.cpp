#include <Adafruit_ILI9341.h>
#include "mainpage.h"
#include "images.h"
#include "drawing.h"
#include "fonts/font.h"

//static int value = 0;

#define BUTTON_HEIGHT 40
#define BUTTON_WIDTH 53
#define BUTTON_MARGIN 5
#define BUTTONS_TOP_2 (320 - BUTTON_MARGIN - BUTTON_HEIGHT)
#define BUTTONS_TOP_1 (BUTTONS_TOP_2 - BUTTON_HEIGHT - BUTTON_MARGIN)
#define BUTTONS_TOP (BUTTONS_TOP_1 - BUTTON_MARGIN)

#define AXIS_SPACING 50
#define AXIS_TEXT_OFFSET 10
#define AXIS_X 26
#define AXIS_Y (AXIS_X + AXIS_SPACING)
#define AXIS_Z (AXIS_Y + AXIS_SPACING)

MainPage::MainPage(Adafruit_ILI9341& tft) : BasePage() , wifiIndicator(tft, 10, 3)
{
    addTouchZone(new TouchZone(5, 5, 240 - 10, 200));

    this->buttons[0] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 0, BUTTONS_TOP_1, BUTTON_WIDTH, BUTTON_HEIGHT);
    this->buttons[1] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 1, BUTTONS_TOP_1, BUTTON_WIDTH, BUTTON_HEIGHT);
    this->buttons[2] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 2, BUTTONS_TOP_1, BUTTON_WIDTH, BUTTON_HEIGHT);
    this->buttons[3] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 3, BUTTONS_TOP_1, BUTTON_WIDTH, BUTTON_HEIGHT);
    this->buttons[4] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 0, BUTTONS_TOP_2, BUTTON_WIDTH, BUTTON_HEIGHT);
    this->buttons[5] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 1, BUTTONS_TOP_2, BUTTON_WIDTH, BUTTON_HEIGHT);
    this->buttons[6] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 2, BUTTONS_TOP_2, BUTTON_WIDTH, BUTTON_HEIGHT);
    this->buttons[7] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 3, BUTTONS_TOP_2, BUTTON_WIDTH, BUTTON_HEIGHT);
}

void MainPage::processTouchZone(TouchZone* zone)
{
    Serial.println("Touched main page zone");
    // value += rand() % 10;
    // value *= rand() % 3;
    // if (value > 999999) {
    //     value = 0;
    // }
}

static uint16_t* image_btn1_()
{
    static uint8_t im = 0;
    switch (im++ % 3) {
    case 0:
        return (uint16_t*)image_btn1;
    case 1:
        return (uint16_t*)image_btn2;
    case 2:
        return (uint16_t*)image_btn3;
    }
    return 0;
}

void MainPage::drawAxis(Axis axis, int y, char axisName) {
    setFont(manolomono, 25);
    drawChar(tft, 15, y + AXIS_TEXT_OFFSET + 10, axisName);

    setFont(consolas, 44);
    drawFloatNumber(tft, 33, y + AXIS_TEXT_OFFSET, state.getPos(axis), 8);

    drawHLine(tft, y + AXIS_SPACING - 1, ILI9341_DARKGREY);
}

void MainPage::drawButtons() {
    // drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 0, BUTTONS_TOP_1, image_btn1_(), &image_btn1_size);
    // drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 1, BUTTONS_TOP_1, image_btn1_(), &image_btn1_size);
    // drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 2, BUTTONS_TOP_1, image_btn1_(), &image_btn1_size);
    // drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 3, BUTTONS_TOP_1, image_btn1_(), &image_btn1_size);

    // drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 0, BUTTONS_TOP_2, image_btn1_(), &image_btn1_size);
    // drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 1, BUTTONS_TOP_2, image_btn1_(), &image_btn1_size);
    // drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 2, BUTTONS_TOP_2, image_btn1_(), &image_btn1_size);
    // drawImage(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * 3, BUTTONS_TOP_2, image_btn1_(), &image_btn1_size);

    this->buttons[0]->draw();
    this->buttons[1]->draw();
    this->buttons[2]->draw();
    this->buttons[3]->draw();
    this->buttons[4]->draw();
    this->buttons[5]->draw();
    this->buttons[6]->draw();
    this->buttons[7]->draw();
}

void MainPage::draw() {
    this->drawButtons();

    this->drawAxis(Axis::X, AXIS_X, 'X');
    this->drawAxis(Axis::Y, AXIS_Y, 'Y');
    this->drawAxis(Axis::Z, AXIS_Z, 'Z');

    setFont(manolomono, 25);

    // drawChar(tft, 10, AXIS_X + AXIS_TEXT_OFFSET + 11, 'X');
    // drawChar(tft, 10, AXIS_Y + AXIS_TEXT_OFFSET + 11, 'Y');
    // drawChar(tft, 10, AXIS_Z + AXIS_TEXT_OFFSET + 11, 'Z');

    // setFont(consolas, 44);

    // drawFloatNumber(tft, 30, AXIS_X + AXIS_TEXT_OFFSET, state.getPos(Axis::X), 8);
    // drawFloatNumber(tft, 30, AXIS_Y + AXIS_TEXT_OFFSET, state.getPos(Axis::Y), 8);
    // drawFloatNumber(tft, 30, AXIS_Z + AXIS_TEXT_OFFSET, state.getPos(Axis::Z), 8);

    drawHLine(tft, AXIS_X - 1, ILI9341_DARKGREY);
    // drawHLine(tft, AXIS_X + AXIS_SPACING - 1, ILI9341_DARKGREY);
    // drawHLine(tft, AXIS_Y + AXIS_SPACING - 1, ILI9341_DARKGREY);
    // drawHLine(tft, AXIS_Z + AXIS_SPACING - 1, ILI9341_DARKGREY);

    drawHLine(tft, BUTTONS_TOP, ILI9341_DARKGREY);

    setFont(manolomono, 13);
    drawText(tft, 39, 180, "FEED");
    drawText(tft, 143, 180, "STEP MM");

    setFont(consolas, 32);
    drawIntNumber(tft, 19, 199, 123, 5);
    drawFloatNumber(tft, 123, 199, 123.45, 4);

    this->wifiIndicator.draw();

    setFont(consolas, 12);
    drawText(tft, 90, 5, "Jogging");
    drawText(tft, 200, 5, "USB");
}
