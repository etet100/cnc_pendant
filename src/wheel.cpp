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
    this->thresholdTop = position + WHEEL_HISTERESIS;
    this->thresholdBottom = position - WHEEL_HISTERESIS;
}

void Wheel::begin()
{
    Serial.println("Initializing wheel...");

    as5600.begin();
    bool as5600connected = as5600.isConnected();

    Serial.print(" Result: ");
    Serial.println(as5600connected ? "connected" : "not connected");

    if (as5600connected) {
        int32_t basePos = as5600.getCumulativePosition() - WHEEL_OFFSET;
        while (true) {
            if (basePos > this->thresholdTop) {
                this->position++;
                updateThresholds(this->position * WHEEL_STEP);
            } else if (basePos < this->thresholdBottom) {
                this->position--;
                updateThresholds(this->position * WHEEL_STEP);
            } else {
                debug();
                return;
            }
        }
    }
}

void Wheel::debug()
{
    Serial.print(this->position, DEC);
    Serial.print(" ");
    Serial.print(this->thresholdBottom, DEC);
    Serial.print(" ");
    Serial.println(this->thresholdTop, DEC);
}

void Wheel::loop()
{
    int32_t basePos = as5600.getCumulativePosition() - WHEEL_OFFSET;

    if (basePos > this->thresholdTop) {
        this->position++;
        updateThresholds(this->position * WHEEL_STEP);
        debug();
    } else if (basePos < this->thresholdBottom) {
        this->position--;
        updateThresholds(this->position * WHEEL_STEP);
        debug();
    }

    this->speed = this->as5600.getAngularSpeed();
}
