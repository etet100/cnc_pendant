#ifndef WHEEL_H_
#define WHEEL_H_

#include <Wire.h>
#include "AS5600.h"

class Wheel
{
    public:
        Wheel(TwoWire& wire);
        void begin();
        void loop();
        int32_t getPosition() { return position; }
        float getSpeed() { return speed; }

    private:
        TwoWire wire;
        AS5600 as5600;
        int32_t position, thresholdBottom, thresholdTop;
        float speed;
        void updateThresholds(float position);
        void debug();
};

#endif // WHEEL_H_
