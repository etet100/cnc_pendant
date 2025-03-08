#include "drawable.h"
#include "drawing.h"

Drawable::Drawable(Screen& tft, int x, int y, int width, int height)
    : tft(tft)
    , x(x)
    , y(y)
    , y2(y + height)
    , width(width)
    , height(height) {
}

void Drawable::draw() {
    if (invalidation == Invalidation::None) {
        return;
    }
    if (!tft.partiallyInLimits(y, y + height)) {
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
