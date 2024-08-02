#ifndef SCREEN_H_
#define SCREEN_H_

#include <Adafruit_ILI9341.h>
#include "touch.h"
#include "basepage.h"

class Screen {
public:
    Screen(Touch &touch);
    void begin();
    void loop();
    void clear();
    void setCurrentPage(BasePage *page);
    Adafruit_ILI9341 &getTFT() { return tft; }

private:
    Adafruit_ILI9341 tft;
    Touch &touch;
    BasePage *currentPage;
};

#endif // SCREEN_H_
