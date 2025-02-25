#include "drawable.h"

Drawable::Drawable(Adafruit_ILI9341& tft, int x, int y, int width, int height)
    : tft(tft)
    , x(x)
    , y(y)
    , width(width)
    , height(height) {
}

void Drawable::draw(int y1, int y2) {    
    if (invalidation == Invalidation::None) {
        return;
    }
    if (y > y2 || y + height < y1) {
        return;
    }
    draw_(y1, y2);
    invalidation = Invalidation::None;
}

void Drawable::invalidate(Invalidation mode) {
    if (mode > this->invalidation) {
        this->invalidation = mode;
    }
}
