#ifndef TOUCHZONE_H_
#define TOUCHZONE_H_

#include <Arduino.h>

class TouchZone
{
    public:
        TouchZone(uint16_t x, uint16_t y, uint16_t width, uint16_t height);
        virtual bool isTouched(uint16_t x, uint16_t y);

    private:
        // do not use x,y to avoid conflict with Drawable
        uint16_t tzx1, tzy1, tzx2, tzy2;
};

#endif // TOUCHZONE_H_
