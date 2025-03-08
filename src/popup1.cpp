#include "popup1.h"
#include "drawing.h"
#include "button.h"
#include "screen.h"

#define TOP 50
#define V_STEP (33+5)
#define H_STEP (70+5)

static char* btnText[12] = {
    "0.001", "0.01", "0.1",
    "1", "5", "10",
    "20", "50", "100",
    "200", "500", "1000"
};

Popup1::Popup1(Screen& tft)
    : BasePage(tft, TOP, 320 - 100) {
    for (int i = 0; i < 12; i++) {
        buttons[i] = new SimpleButton(
            tft,
            10 + (i % 3) * H_STEP,
            y + 50 + (i / 3) * V_STEP,
            70, 33, btnText[i]
        );
        addTouchZone(buttons[i]);
    }
}

void Popup1::draw_() {
    if (invalidation == Invalidation::All) {
        tft.fillRect(0, y, SCREEN_WIDTH, 4, ILI9341_BLUE);
        tft.fillRect(0, y + height - 4, SCREEN_WIDTH, 4, ILI9341_BLUE);
        tft.fillRect(0, y + 4, SCREEN_WIDTH, height - 4 - 4, ILI9341_DARKGREY);

        tft.setFont(FT(manolomono, 23));
        tft.setTextPalette(WHITE_ON_DARKGRAY);
        tft.drawText(SCREEN_WIDTH_HALF, y + 16, "Set speed", true);
    }

    for (int i = 0; i < 12; i++) {
        buttons[i]->draw();
    }
}

void Popup1::processTouchZone(TouchZone* zone) {
    for (int i = 0; i < 12; i++) {
        buttons[i]->setDown(buttons[i] == zone);
    }
    invalidate(Invalidation::Foreground);
}
