#ifndef STATEINDICATOR_H
#define STATEINDICATOR_H

#include "drawable.h"
#include "wifi.h"
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
        void draw_() override;

    private:
        ImageSize imageSize;
        WiFiCommmunicatorState state;
};

class AliveIndicator : public StateIndicator
{
    public:
        AliveIndicator(Adafruit_ILI9341& tft, int x, int y)
            : StateIndicator(tft, x, y, 16, 17) { }
        void draw() override;
};

#endif // STATEINDICATOR_H
