#include "button.h"
#include "drawing.h"

Button::Button(Adafruit_ILI9341& tft, int x, int y, int width, int height, const uint16_t* image)
    : TouchZone(x, y, width, height)
    , Drawable(tft, x, y, width, height)
    , image(image)
{
}

void Button::draw_()
{
    drawImage(&tft, x, y, image, width, height);
}

bool Button::isTouched(int x, int y)
{
    Serial.println("Button::isTouched");

    return TouchZone::isTouched(x, y);
}
