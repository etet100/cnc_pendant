#include "state.h"

State::State() {
}

float State::getPos(Axis axis) {
    return pos[(int) axis];
}

Axis State::getSelectedAxis() {
    return selectedAxis;
}

void State::setPos(Axis axis, float value) {
    pos[(int) axis] = value;
}

void State::setSelectedAxis(Axis axis) {
    selectedAxis = axis;
}

void State::fillStateMessage(StateMessage &msg) {
    msg.header.start = 0xAA55;
    msg.header.size = sizeof(StateMessage);
    msg.header.type = (uint8_t) PacketType::STATE;
    msg.x = pos[(int) Axis::X];
    msg.y = pos[(int) Axis::Y];
    msg.z = pos[(int) Axis::Z];
    msg.selectedAxis = (uint8_t) selectedAxis;
    msg.mode = mode;
}

State state;
