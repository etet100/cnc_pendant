#ifndef STATEINDICATOR_H
#define STATEINDICATOR_H

#include "drawable.h"
#include "wifi.h"
#include "images.h"

class StateIndicator: public Drawable
{
    public:
        StateIndicator(Adafruit_ILI9341& tft, int x, int y, int width, int height);
        StateIndicator(Adafruit_ILI9341& tft, int x, int y, ImageSize &imageSize);
};

class WifiStateIndicator: public StateIndicator
{
    public:
        WifiStateIndicator(Adafruit_ILI9341& tft, int x, int y);
        void draw() override;
        void setState(WiFiCommmunicatorState state) { this->state = state; }
    private:
        ImageSize imageSize;
        WiFiCommmunicatorState state;
};

#endif // STATEINDICATOR_H
