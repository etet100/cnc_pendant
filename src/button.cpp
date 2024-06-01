#include "button.h"

Button::Button(Adafruit_ILI9341 &tft, int x, int y, int width, int height) : TouchZone(x, y, width, height), Drawable(tft, x, y, width, height)
{
}

void Button::draw()
{
    tft.fillRect(x, y, width, height, ILI9341_BLUE);
    tft.drawRect(x, y, width, height, ILI9341_WHITE);
}
