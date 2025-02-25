#ifndef STATEINDICATOR_H
#define STATEINDICATOR_H

#include "drawable.h"
#include "wirelesscommunicator.h"
#include "images.h"

class StateIndicator : public Drawable
{
    public:
        StateIndicator(Adafruit_ILI9341& tft, int x, int y, int width, int height);
        StateIndicator(Adafruit_ILI9341& tft, int x, int y, ImageSize& imageSize);
};

class WifiStateIndicator : public StateIndicator
{
    public:
        WifiStateIndicator(Adafruit_ILI9341& tft, int x, int y);

    protected:
        void draw_(int y1, int y2) override;

    private:
        ImageSize imageSize;
        WiFiCommmunicatorState state;
};

class AliveIndicator : public StateIndicator
{
    public:
        AliveIndicator(Adafruit_ILI9341& tft, int x, int y)
            : StateIndicator(tft, x, y, 16, 17) { }
        void draw(int y1, int y2) override;
};

class MachineStateIndicator : public StateIndicator
{
    public:
        MachineStateIndicator(Adafruit_ILI9341& tft, int x, int y);
        void draw(int y1, int y2) override;
};

#endif // STATEINDICATOR_H
