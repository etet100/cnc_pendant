#include "screen.h"
#include "mainpage.h"
#include "images.h"
#include "drawing.h"
#include "fonts/font.h"

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

MainPage::MainPage(Screen& tft)
    : BasePage(tft, 0, 320)
    , axis { AxisWidget(Axis::X, AXIS_X, 'X', tft), AxisWidget(Axis::Y, AXIS_Y, 'Y', tft), AxisWidget(Axis::Z, AXIS_Z, 'Z', tft) }
    , aliveIndicator(tft, 213, 3)
    , wifiIndicator(tft, 10, 3)
    , machineStateIndicator(tft, 110, 7)
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
        buttons[i] = new ImgButton(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * i, BUTTONS_TOP_1, BUTTON_WIDTH, BUTTON_HEIGHT, img[i]);
        addTouchZone(this->buttons[i]);
    }
    for (int i = 4; i < 8; i++) {
        buttons[i] = new ImgButton(tft, BUTTON_MARGIN + (BUTTON_WIDTH + BUTTON_MARGIN) * (i - 4), BUTTONS_TOP_2, BUTTON_WIDTH, BUTTON_HEIGHT, img[i]);
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
        this->buttons[i]->draw();
    }
}

void MainPage::draw_() {
    if (invalidation == Invalidation::All) {
        tft.fillScreen(ILI9341_BLACK);
    }

    if (popup1) {
        tft.setLimits(0, 50, 319 - 50, 319);
    } else {
        tft.resetLimits();
    }

    this->drawButtons();

    tft.setFont(FT(manolomono, 13));
    tft.drawText(60, 180, "FEED", true);
    tft.drawText(180, 180, "STEP MM", true);

    tft.setFont(FT(consolas, 32));
    tft.drawIntNumber(60, 199, 123, "%05d", true);
    tft.drawFloatNumber(180, 199, 123.45, "%5.2f", true);

    this->wifiIndicator.draw();
    this->aliveIndicator.draw();
    this->machineStateIndicator.draw();

    this->axis[0].draw();
    this->axis[1].draw();
    this->axis[2].draw();

    tft.drawFastHLine(0, AXIS_X - 1, SCREEN_WIDTH, ILI9341_DARKGREY);
    tft.drawFastHLine(0, BUTTONS_TOP, SCREEN_WIDTH, ILI9341_DARKGREY);

    tft.setFont(FT(consolas, 12));
    tft.drawText(70, 7, "USB");

    tft.resetLimits();

    if (popup1) {
        popup1->draw();
    }
}

void MainPage::onPowerOff(Callback callback) {
    this->powerOffCallback = callback;
}

void MainPage::processTouch(uint16_t x, uint16_t y)
{
    if (popup1) {
        popup1->processTouch(x, y);
    } else {
        BasePage::processTouch(x, y);
    }
}

void MainPage::processButtons(Buttons &buttons)
{
    if (buttons.isTopPressed()) {
        if (!popup1) {
            popup1 = new Popup1(tft);
        }
    } else {
        if (popup1) {
            delete popup1;
            popup1 = nullptr;
            invalidate();
        }
    }
}

void MainPage::invalidate(Invalidation mode)
{
    BasePage::invalidate(mode);
    for (int i = 0; i < 3; i++) {
        axis[i].invalidate(mode);
    }
    for (int i = 0; i < 8; i++) {
        buttons[i]->invalidate(mode);
    }
}

void MainPage::draw()
{
    draw_();
    invalidation = Invalidation::None;
}

AxisWidget::AxisWidget(Axis axis, uint16_t y, char axisName, Screen& tft)
    : Drawable(tft, 0, y, 240, AXIS_SPACING)
    , TouchZone(0, y, 240, AXIS_SPACING) {
    this->axis = axis;
    this->y = y;
    this->axisName = axisName;
}

void AxisWidget::draw_() {
    if (invalidation == Invalidation::All) {
        tft.fillRect(0, y, 240, AXIS_SPACING, selected ? 0x051F : ILI9341_BLACK);
        tft.drawFastHLine(0, y + AXIS_SPACING - 1, SCREEN_WIDTH, ILI9341_DARKGREY);
    }

    drawText();
}

void AxisWidget::drawText() {
    tft.setTextPalette(selected ? WHITE_ON_BLUE : WHITE_ON_BLACK, true);

    tft.setFont(FT(manolomono, 25));
    tft.drawChar(15, y + AXIS_TEXT_OFFSET + 10, axisName);

    tft.setFont(FT(consolas, 44));
    tft.drawFloatNumber(33, y + AXIS_TEXT_OFFSET, state.getPos(axis), "%08.2f", false);

    tft.restoreTextPalette();
}

bool AxisWidget::isTouched(uint16_t x, uint16_t y) {
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
