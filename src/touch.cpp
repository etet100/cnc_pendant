#include "touch.h"

Touch::Touch(TwoWire& wire): wire(wire)
{
}

void Touch::begin()
{
    Serial.println("Initializing touch...");

    ctp = new Adafruit_FT6206();
    if (!ctp->begin(40, &wire)) { // pass in 'sensitivity' coefficient and I2C bus
        Serial.println(" Result: error");
        while (1) {
            delay(10);
        }
    } else {
        Serial.println(" Result: success");
    }
}

void Touch::loop()
{
    if (!ctp->touched()) {
        touched = false;
        return;
    }

    point = ctp->getPoint();
    point.x = 240 - point.x;
    point.y = 320 - point.y;

    touched = true;
    // Serial.print(240 - p.x);
    // Serial.print(", ");
    // Serial.println(320 - p.y);
}

bool Touch::isTouched()
{
    return touched;
}

TS_Point Touch::getPoint()
{
    touched = false;
    return point;
}
