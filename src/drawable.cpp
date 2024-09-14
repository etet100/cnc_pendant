#include "drawable.h"

Drawable::Drawable(Adafruit_ILI9341& tft, int x, int y, int width, int height)
    : tft(tft)
    , x(x)
    , y(y)
    , width(width)
    , height(height) {
}

void Drawable::draw() {
    if (invalidation == Invalidation::None) {
        return;
    }
    draw_();
    invalidation = Invalidation::None;
}

void Drawable::invalidate(Invalidation mode) {
    if (mode > this->invalidation) {
        this->invalidation = mode;
    }
}
