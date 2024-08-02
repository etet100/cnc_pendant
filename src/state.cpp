#include "state.h"

State::State() {
}

float State::getPos(Axis axis) {
    return pos[axis];
}

void State::setPos(Axis axis, float value) {
    pos[axis] = value;
}

State state;
