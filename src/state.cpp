#include "state.h"

State::State() {
}

float State::getPos(Axis axis) {
    return pos[axis];
}

State state;
