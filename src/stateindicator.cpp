#include "stateindicator.h"
#include "drawing.h"
#include "images.h"
#include "state.h"

StateIndicator::StateIndicator(Adafruit_ILI9341& tft, int x, int y, int width, int height)
    : Drawable(tft, x, y, width, height)
{
}

StateIndicator::StateIndicator(Adafruit_ILI9341& tft, int x, int y, ImageSize& imageSize)
    : Drawable(tft, x, y, imageSize.width, imageSize.height)
{
}

// void StateIndicator::draw()
// {
// }

WifiStateIndicator::WifiStateIndicator(Adafruit_ILI9341& tft, int x, int y)
    : StateIndicator(tft, x, y, 40, 17),
    imageSize({ .width = 40, .height = 17, .size = 40 * 17 * 2 })
{
}

void WifiStateIndicator::draw()
{
    drawImage(&tft, x, y, image_wifi + (state * imageSize.width * imageSize.height), &imageSize);
}

void AliveIndicator::draw()
{
    static int state = 0;
    drawImage(&tft, x, y, image_alive + (state * 16 * 17) , {.width = 16, .height = 17, .size = 16 * 17 * 2});
    state = (state + 1) % 4;
}
