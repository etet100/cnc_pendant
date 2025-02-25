#include "forms/lcdwidget.h"
#include "Adafruit_FT6206.h"

extern LcdWidget *lcd;

TS_Point::TS_Point(void) {
  x = y = z = 0;
}

TS_Point::TS_Point(int16_t x, int16_t y, int16_t z)
{
  this->x = x;
  this->y = y;
  this->z = z;
}

bool Adafruit_FT6206::touched() {
    lcd->lock();
    bool touched = lcd->touched();
    lcd->unlock();

    return touched;
}

TS_Point Adafruit_FT6206::getPoint() {
    lcd->lock();
    QPoint point = lcd->last();
    lcd->unlock();

    return TS_Point(
        240 - point.x(),
        320 - point.y(),
        0
    );
}
