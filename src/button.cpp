#include "button.h"
#include "drawing.h"

Button::Button(Adafruit_ILI9341 &tft, int x, int y, int width, int height) : TouchZone(x, y, width, height), Drawable(tft, x, y, width, height)
{
}

void Button::draw()
{
    tft.fillRect(x + 1, y + 1, width - 2, height - 2, ILI9341_BLUE);
    tft.drawRect(x, y, width, height, ILI9341_WHITE);
}
