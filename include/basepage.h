#ifndef BASEPAGE_H_
#define BASEPAGE_H_

#include <Adafruit_ILI9341.h>

class BasePage {
public:
    BasePage() { tft = nullptr; };
    virtual void draw() = 0;
    void setTFT(Adafruit_ILI9341* tft);
protected:
    Adafruit_ILI9341* tft;
};

#endif // BASEPAGE_H_
