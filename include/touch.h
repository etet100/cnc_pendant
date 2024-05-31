#ifndef TOUCH_H
#define TOUCH_H

#include <Wire.h>
#include <Adafruit_FT6206.h>

class Touch {
public:
    Touch(TwoWire* wire);
    void begin();
    void loop();

private:
    TwoWire *wire;
    Adafruit_FT6206 *ctp;
};

#endif // TOUCH_H
