#include "button.h"
#include "drawing.h"

Button::Button(Adafruit_ILI9341& tft, int x, int y, int width, int height, const uint16_t* image)
    : TouchZone(x, y, width, height)
    , Drawable(tft, x, y, width, height)
    , image(image)
{
}

void Button::draw_(int y1, int y2)
{
    if (y >= y1 && y + height <= y2) {
        drawImage(&tft, x, y, image, width, height);
        
        return;
    }

    int y_ = y, height_ = height;
    uint16_t* image_ = (uint16_t*)image;
    if (y1 > y) {
        int skip = y1 - y;
        height_ -= skip;
        y_ += skip;
        image_ += skip * width;
    }
    if (y2 < y + height) {
        height_ -= y + height - y2;
    }

    drawImage(&tft, x, y_, image_, width, height_);
}

bool Button::isTouched(int x, int y)
{
    Serial.println("Button::isTouched");

    return TouchZone::isTouched(x, y);
}
