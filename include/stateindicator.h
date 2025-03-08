#ifndef STATEINDICATOR_H
#define STATEINDICATOR_H

#include "drawable.h"
#include "wirelesscommunicator.h"
#include "images.h"

class StateIndicator : public Drawable
{
    public:
        StateIndicator(Screen& tft, int x, int y, int width, int height);
        StateIndicator(Screen& tft, int x, int y, ImageSize& imageSize);
};

class WifiStateIndicator : public StateIndicator
{
    public:
        WifiStateIndicator(Screen& tft, int x, int y);

    protected:
        void draw_() override;

    private:
        ImageSize imageSize;
        WiFiCommmunicatorState state;
};

class AliveIndicator : public StateIndicator
{
    public:
        AliveIndicator(Screen& tft, int x, int y)
            : StateIndicator(tft, x, y, 16, 17) { }
        void draw() override;
};

class MachineStateIndicator : public StateIndicator
{
    public:
        MachineStateIndicator(Screen& tft, int x, int y);
        void draw() override;
};

#endif // STATEINDICATOR_H
