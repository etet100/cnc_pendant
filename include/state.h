#ifndef STATE_H
#define STATE_H

#include <stdint.h>
#include <algorithm>
#include "communication.h"

enum class Axis {
    X = 0,
    Y,
    Z,
};

class State
{
public:
    State();
    float getPos(Axis axis);
    void setPos(Axis axis, float value);
    void fillStateMessage(StateMessage &msg);
private:
    float pos[3] = {0, 100.12, 2322.315};
    CommunicationMode mode = CommunicationMode::NONE;
};

extern State state;

#endif // STATE_H
