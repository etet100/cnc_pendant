#include "wheel.h"

Wheel::Wheel(TwoWire& wire): wire(wire), as5600(&wire)
{
}

void Wheel::begin()
{
    as5600.begin();
    bool as5600connected = as5600.isConnected();

    Serial.print("Connect: ");
    Serial.println(as5600connected);
}

void Wheel::loop()
{
    as5600.getCumulativePosition();
    as5600.getAngularSpeed();
}
