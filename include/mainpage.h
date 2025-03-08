#ifndef MAINPAGE_H_
#define MAINPAGE_H_

#include "globals.h"
#include "basepage.h"
#include "controls.h"
#include "wirelesscommunicator.h"
#include "state.h"
#include "popup1.h"
#include "screen.h"

class AxisWidget : public Drawable, public TouchZone
{
    public:
        AxisWidget(Axis axis, uint16_t y, char axisName, Screen& tft);
        bool isTouched(uint16_t x, uint16_t y) override;
        void setSelected(bool selected);

    protected:
        void draw_() override;

    private:
        int y;
        char axisName;
        bool selected = false;
        Axis axis;
        void drawText();
};

class MainPage : public BasePage
{
    public:
        MainPage(Screen& tft);
        void onPowerOff(Callback callback);
        void processTouch(uint16_t x, uint16_t y) override;
        void processButtons(Buttons& buttons) override;
        void invalidate(Invalidation mode = Invalidation::All) override;
        void draw() override;

    protected:
        void processTouchZone(TouchZone* zone) override;
        void draw_() override;

    private:
        void drawButtons();
        Button* buttons[8];
        AxisWidget axis[3];
        AliveIndicator aliveIndicator;
        WifiStateIndicator wifiIndicator;
        MachineStateIndicator machineStateIndicator;
        Callback powerOffCallback;
        Popup1* popup1 = nullptr;
};

#endif // MAINPAGE_H_
