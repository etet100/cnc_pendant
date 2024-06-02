#ifndef TOUCH_H
#define TOUCH_H

#include <Wire.h>
#include <Adafruit_FT6206.h>

class Touch {
public:
    Touch(TwoWire& wire);
    void begin();
    void loop();
    bool isTouched();
    TS_Point getPoint();

private:
    TwoWire& wire;
    Adafruit_FT6206* ctp;
    bool touched;
    TS_Point point;
};

#endif // TOUCH_H
