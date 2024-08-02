#include "wheel.h"

#define WHEEL_STEP 136.5333333
#define WHEEL_OFFSET 10
#define WHEEL_POSITION 0
#define WHEEL_HISTERESIS (WHEEL_STEP * 0.7)

Wheel::Wheel(TwoWire& wire): wire(wire), as5600(&wire), position(WHEEL_POSITION)
{
    updateThresholds(0);
}

void Wheel::updateThresholds(float position)
{
    thresholdTop = position + WHEEL_HISTERESIS;
    thresholdBottom = position - WHEEL_HISTERESIS;
}

void Wheel::begin()
{
    Serial.println("Initializing wheel...");

    as5600.begin();
    bool as5600connected = as5600.isConnected();

    Serial.print(" Result: ");
    Serial.println(as5600connected ? "connected" : "not connected");
}

void Wheel::debug()
{
    Serial.print(position, DEC);
    Serial.print(" ");
    Serial.print(thresholdBottom, DEC);
    Serial.print(" ");
    Serial.println(thresholdTop, DEC);
}

void Wheel::loop()
{
    int32_t basePos = as5600.getCumulativePosition() - WHEEL_OFFSET;

    if (basePos > thresholdTop) {
        position++;
        updateThresholds(position * WHEEL_STEP);
        debug();
    } else if (basePos < thresholdBottom) {
        position--;
        updateThresholds(position * WHEEL_STEP);
        debug();
    }

    speed = as5600.getAngularSpeed();
}
