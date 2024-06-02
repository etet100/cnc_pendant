#ifndef WHEEL_H_
#define WHEEL_H_

#include <Wire.h>
#include "AS5600.h"

class Wheel {
public:
    Wheel(TwoWire& wire);
    void begin();
    void loop();

private:
    TwoWire wire;
    AS5600 as5600;
};

#endif // WHEEL_H_
