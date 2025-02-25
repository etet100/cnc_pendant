#include <Adafruit_ILI9341.h>
#include "mainpage.h"
#include "images.h"
#include "drawing.h"
#include "fonts/font.h"
#include "colors.h"

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

MainPage::MainPage(Adafruit_ILI9341& tft)
    : BasePage()
    , axis { AxisWidget(Axis::X, AXIS_X, 'X', tft), AxisWidget(Axis::Y, AXIS_Y, 'Y', tft), AxisWidget(Axis::Z, AXIS_Z, 'Z', tft) }
    , aliveIndicator(tft, 213, 3)
    , wifiIndicator(tft, 10, 3)
    , machineStateIndicator(tft, 110, 3)
{
    for (int i = 0; i < 3; i++) {
        addTouchZone(&axis[i]);
    }

    const uint16_t* img[8] = {
        image_btn_start,
        image_btn_stop,
        image_btn_pause,
        image_btn_home,
        image_btn_reset,
        image_btn_spindle,
        image_btn_settings,
        image_btn_power,
    };
    for (int i = 0; i < 4; i++) {
        buttons[i] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * i, BUTTONS_TOP_1, BUTTON_WIDTH, BUTTON_HEIGHT, img[i]);
        addTouchZone(this->buttons[i]);
    }
    for (int i = 4; i < 8; i++) {
        buttons[i] = new Button(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * (i - 4), BUTTONS_TOP_2, BUTTON_WIDTH, BUTTON_HEIGHT, img[i]);
        addTouchZone(this->buttons[i]);
    }

    eventManager.addListener(EventType::StateChanged, [this](int event, int param) {
        this->axis[0].invalidate(Invalidation::Foreground);
        this->axis[0].setSelected(state.isAxisSelected(Axis::X));
        this->axis[1].invalidate(Invalidation::Foreground);
        this->axis[1].setSelected(state.isAxisSelected(Axis::Y));
        this->axis[2].invalidate(Invalidation::Foreground);
        this->axis[2].setSelected(state.isAxisSelected(Axis::Z));
    });
}

void MainPage::processTouchZone(TouchZone* zone) {
    Serial.println("Touched main page zone");

    if (zone == this->buttons[7]) {
        eventManager.queueEvent(EventType::PowerBtnPressed, 0);
        // if (this->powerOffCallback) {
        //     this->powerOffCallback(1);
        // }
    }

    // if (static_cast<Button*>(zone) != nullptr) {
    //     Button* button = (Button*)zone;

    //     //button->toggle();
    // }

    // value += rand() % 10;
    // value *= rand() % 3;
    // if (value > 999999) {
    //     value = 0;
    // }
}

void MainPage::drawButtons() {
    for (int i = 0; i < 8; i++) {
        this->buttons[i]->draw(240, 300); // todo
    }
}

void MainPage::draw() {
    this->drawButtons();

    setFont(manolomono, 13);
    drawText(tft, 60, 180, "FEED", true);
    drawText(tft, 180, 180, "STEP MM", true);

    setFont(consolas, 32);
    drawIntNumber(tft, 60, 199, 123, "%05d", true);
    drawFloatNumber(tft, 180, 199, 123.45, "%5.2f", true);

    this->wifiIndicator.draw(0, 319); // todo
    this->aliveIndicator.draw(0, 319);
    this->machineStateIndicator.draw(0, 319);

    this->axis[0].draw(0, 319);
    this->axis[1].draw(0, 319);
    this->axis[2].draw(0, 319);

    drawHLine(tft, AXIS_X - 1, ILI9341_DARKGREY);
    drawHLine(tft, BUTTONS_TOP, ILI9341_DARKGREY);

    drawText(tft, 70, 7, "USB");
}

void MainPage::onPowerOff(Callback callback) {
    this->powerOffCallback = callback;
}

AxisWidget::AxisWidget(Axis axis, int y, char axisName, Adafruit_ILI9341& tft)
    : Drawable(tft, 0, y, 240, AXIS_SPACING)
    , TouchZone(0, y, 240, AXIS_SPACING) {
    this->axis = axis;
    this->y = y;
    this->axisName = axisName;
}

void AxisWidget::draw_(int y1, int y2) {
    if (invalidation == Invalidation::All) {
        fillRect(&tft, 0, y, 240, AXIS_SPACING, selected ? 0x051F : ILI9341_BLACK);
        drawHLine(&tft, y + AXIS_SPACING - 1, ILI9341_DARKGREY);
    }

    drawText();
}

void AxisWidget::drawText() {
    setTextColor(selected ? WHITE_ON_BLUE : WHITE_ON_BLACK, true);

    setFont(manolomono, 25);
    drawChar(&tft, 15, y + AXIS_TEXT_OFFSET + 10, axisName);

    setFont(consolas, 44);
    drawFloatNumber(&tft, 33, y + AXIS_TEXT_OFFSET, state.getPos(axis), "%08.2f", false);

    restoreTextColor();
}

bool AxisWidget::isTouched(int x, int y) {
    if (TouchZone::isTouched(x, y)) {
        state.setSelectedAxis(axis);
        state.triggerUpdatedEvent();
    }

    return false;
}

void AxisWidget::setSelected(bool selected) {
    if (this->selected != selected) {
        this->selected = selected;
        this->invalidate(Invalidation::All);
    }
}
