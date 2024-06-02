#ifndef MAINPAGE_H_
#define MAINPAGE_H_

#include "basepage.h"
#include <Adafruit_ILI9341.h>

class MainPage : public BasePage {
public:
    MainPage();
    void draw() override;
protected:
    void processTouchZone(TouchZone* zone) override;
};

#endif // MAINPAGE_H_
