#ifndef BASEPAGE_H_
#define BASEPAGE_H_

#include <Adafruit_ILI9341.h>
#include "touchzone.h"

struct TouchZoneListItem {
    TouchZone* touchZone;
    struct TouchZoneListItem* next;
};

class BasePage {
public:
    BasePage() { tft = nullptr; touchZones = nullptr; };
    virtual void draw() = 0;
    void setTFT(Adafruit_ILI9341* tft);
    void processTouch(int x, int y);
    TouchZone* touchZoneAtPos(int x, int y);
protected:
    TouchZoneListItem* touchZones;
    Adafruit_ILI9341* tft;
    void addTouchZone(TouchZone* zone);
    virtual void processTouchZone(TouchZone* zone) = 0;
};

#endif // BASEPAGE_H_
