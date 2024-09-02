#ifndef MAINPAGE_H_
#define MAINPAGE_H_

#include "basepage.h"
#include "controls.h"
#include "wifi.h"
#include "state.h"
#include <Adafruit_ILI9341.h>

class MainPage : public BasePage {
public:
    MainPage(Adafruit_ILI9341& tft);
    void draw() override;
    WifiStateIndicator wifiIndicator;
protected:
    void processTouchZone(TouchZone* zone) override;
private:
    void drawAxis(Axis axis, int y, char axisName);
    void drawButtons();
    Button* buttons[8];
};

#endif // MAINPAGE_H_
