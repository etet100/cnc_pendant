#ifndef STATE_H
#define STATE_H

enum Axis : int { X = 0, Y = 1, Z = 2 };

class State
{
public:
    State();
    float getPos(Axis axis);
private:
    float pos[3] = {0, 100.12, 2322.315};
};

extern State state;

#endif // STATE_H
