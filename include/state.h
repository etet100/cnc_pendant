#ifndef STATE_H
#define STATE_H

#include <stdint.h>
#include <algorithm>
#include "communication.h"

enum class Axis {
    None = -1,
    X = 0,
    Y,
    Z,
};

class State
{
public:
    State();
    float getPos(Axis axis);
    Axis getSelectedAxis();
    void setPos(Axis axis, float value);
    void setSelectedAxis(Axis axis);
    void fillStateMessage(StateMessage &msg);
    bool isAxisSelected(Axis axis);
private:
    float pos[3] = {0, 100.12, 2322.315};
    CommunicationMode mode = CommunicationMode::NONE;
    Axis selectedAxis = Axis::None;
};

extern State state;

#endif // STATE_H
