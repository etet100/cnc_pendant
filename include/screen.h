#ifndef SCREEN_H_
#define SCREEN_H_

#include <Adafruit_ILI9341.h>
#include "touch.h"
#include "basepage.h"

#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 320

class Screen {
public:
    Screen(Touch &touch);
    void begin();
    void loop();
    void clear();
    void setCurrentPage(BasePage *page);
    void setBrightness(uint8_t brightness);
    Adafruit_ILI9341 &getTFT() { return tft; }

private:
    Adafruit_ILI9341 tft;
    Touch &touch;
    BasePage *currentPage;
};

#endif // SCREEN_H_
