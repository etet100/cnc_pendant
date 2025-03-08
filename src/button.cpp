#include "button.h"
#include "drawing.h"
#include "colors.h"

Button::Button(Screen& tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height)
    : TouchZone(x, y, width, height)
    , Drawable(tft, x, y, width, height) {
}

bool Button::isTouched(uint16_t x, uint16_t y) {
    Serial.println("Button::isTouched");

    return TouchZone::isTouched(x, y);
}

void Button::setDown(bool down)
{
    this->down = down;
    invalidate();
}

ImgButton::ImgButton(Screen& tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height, const uint16_t* image)
    : Button(tft, x, y, width, height)
    , image(image) {
}

void ImgButton::draw_() {
    tft.drawImage(x, y, image, width, height);
}

SimpleButton::SimpleButton(Screen& tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height, const char* text)
    : Button(tft, x, y, width, height)
    , text(text) {
}

//#define ILI9341_DARKGREY 0x7BEF    ///< 123, 125, 123
#define ILI9341_DARKERGRAY 0x39E7  ///< 77, 79, 77

void SimpleButton::draw_() {
    if (down) {
        tft.fillRect(x, y, width, height, ILI9341_ORANGE);
        tft.setTextPalette(BLACK_ON_ORANGE);
    } else {
        tft.fillRect(x, y, width, height, ILI9341_DARKERGRAY);
        tft.setTextPalette(WHITE_ON_DARKERGRAY);
    }
    tft.setFont(FT(manolomono, 19));
    tft.drawText(x + (width / 2), y + 8, text, true);
    tft.restoreTextPalette();
}

void SimpleButton::setText(const char* text) {
    this->text = text;
}
