#include "stateindicator.h"
#include "drawing.h"
#include "images.h"
#include "state.h"

StateIndicator::StateIndicator(Screen& tft, int x, int y, int width, int height)
    : Drawable(tft, x, y, width, height) {
}

StateIndicator::StateIndicator(Screen& tft, int x, int y, ImageSize& imageSize)
    : Drawable(tft, x, y, imageSize.width, imageSize.height) {
}

WifiStateIndicator::WifiStateIndicator(Screen& tft, int x, int y)
    : StateIndicator(tft, x, y, 40, 17)
    , imageSize({ .width = 40, .height = 17, .size = 40 * 17 * 2 }) {
    eventManager.addListener(EventType::WiFiStateChanged, [this](int event, int param) {
        this->state = (WiFiCommmunicatorState)param;
        this->invalidate();
    });
}

void WifiStateIndicator::draw_() {
    tft.drawImage(x, y, image_wifi + (state * imageSize.width * imageSize.height), &imageSize);
}

void AliveIndicator::draw() {
    static int state = 0;
    tft.drawImage(x, y, image_alive + (state * 16 * 17), { .width = 16, .height = 17, .size = 16 * 17 * 2 });
    state = (state + 1) % 4;
}

MachineStateIndicator::MachineStateIndicator(Screen& tft, int x, int y) : StateIndicator(tft, x, y, 100, 17) {
    eventManager.addListener(EventType::StateChanged, [this](int event, int param) {
        this->invalidate();
    });
}

void MachineStateIndicator::draw() {
    const char *stateName[] = {
        "Unknown", // 0
        "Idle",
        "Alarm",
        "Run",
        "Home",
        "Hold0",
        "Hold1",
        "Queue",
        "Check",
        "Door0",
        "Door1",
        "Door2",
        "Door3",
        "Jog",
        "Sleep" // 14
    };

    if (this->invalidation == Invalidation::All) {
        tft.fillRect(x, y, width, height, ILI9341_BLACK);
    }

    tft.setFont(FT(consolas, 12));
    tft.drawText(x, y, stateName[state.getMachineState()]);
}
