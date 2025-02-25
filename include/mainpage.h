#ifndef MAINPAGE_H_
#define MAINPAGE_H_

#include "globals.h"
#include "basepage.h"
#include "controls.h"
#include "wirelesscommunicator.h"
#include "state.h"
#include <Adafruit_ILI9341.h>

class AxisWidget : public Drawable, public TouchZone
{
    public:
        AxisWidget(Axis axis, int y, char axisName, Adafruit_ILI9341& tft);
        bool isTouched(int x, int y) override;
        void setSelected(bool selected);

    protected:
        void draw_(int y1, int y2) override;

    private:
        int y;
        char axisName;
        bool selected = false;
        Axis axis;
        void drawText();
};

class MainPage : public BasePage {
    public:
        MainPage(Adafruit_ILI9341& tft);
        void draw() override;
        void onPowerOff(Callback callback);

    protected:
        void processTouchZone(TouchZone* zone) override;

    private:
        void drawButtons();
        Button* buttons[8];
        AxisWidget axis[3];
        AliveIndicator aliveIndicator;
        WifiStateIndicator wifiIndicator;
        MachineStateIndicator machineStateIndicator;
        Callback powerOffCallback;
};

#endif // MAINPAGE_H_
