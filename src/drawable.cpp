#include "drawable.h"

Drawable::Drawable(Adafruit_ILI9341 &tft, int x, int y, int width, int height): tft(tft), x(x), y(y), width(width), height(height)
{
}
