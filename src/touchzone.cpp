#include "touchzone.h"

TouchZone::TouchZone(int x, int y, int width, int height): x1(x), y1(y), x2(x + width), y2(y + height)
{
}

bool TouchZone::isTouched(int x, int y)
{
    return x >= this->x1 && x <= this->x2 && y >= this->y1 && y <= this->y2;
}
