#include "touch.h"

Touch::Touch(TwoWire* wire): wire(wire)
{
}

void Touch::begin()
{
    ctp = new Adafruit_FT6206();
    if (!ctp->begin(40, wire)) { // pass in 'sensitivity' coefficient and I2C bus
        Serial.println("Couldn't start FT6206 touchscreen controller");
        while (1)
            delay(10);
    }
}

void Touch::loop()
{
    if (ctp->touched()) {
        TS_Point p = ctp->getPoint();
        Serial.print(240 - p.x);
        Serial.print(", ");
        Serial.println(320 - p.y);
    }
}
