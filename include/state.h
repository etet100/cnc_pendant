#ifndef STATE_H
#define STATE_H

#include <stdint.h>
#include "communication.h"
#include "globals.h"

class State
{
    public:
        State();
        float getPos(Axis axis);
        Axis getSelectedAxis();
        void setPos(Axis axis, float value);
        void setSelectedAxis(Axis axis);
        void fillStateMessage(StateMessage& msg);
        bool isAxisSelected(Axis axis);
        void triggerUpdatedEvent();

    private:
        float pos[3] = { 0, 0, 0 };
        CommunicationMode mode = CommunicationMode::NONE;
        Axis selectedAxis = Axis::None;
};

extern State state;

#endif // STATE_H
