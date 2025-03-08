#ifndef BASEPAGE_H_
#define BASEPAGE_H_

#include <Arduino.h>
#include "touchzone.h"
#include "drawable.h"
#include "buttons.h"
#include "screen.h"

struct TouchZoneListItem
{
    TouchZone* touchZone;
    struct TouchZoneListItem* next;
};

class BasePage : public Drawable
{
    public:
        BasePage(Screen& tft, uint16_t y, uint16_t height);
        virtual void processTouch(uint16_t x, uint16_t y);
        TouchZone* touchZoneAtPos(uint16_t x, uint16_t y);
        virtual void processButtons(Buttons& buttons);

    protected:
        TouchZoneListItem* touchZones = nullptr;
        void addTouchZone(TouchZone* zone);
        virtual void processTouchZone(TouchZone* zone) = 0;
};

#endif // BASEPAGE_H_
