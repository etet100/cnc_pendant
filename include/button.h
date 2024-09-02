#ifndef BUTTON_H_
#define BUTTON_H_

#include "drawable.h"
#include "touchzone.h"

class Button : public TouchZone, public Drawable {
    public:
        Button(Adafruit_ILI9341& tft, int x, int y, int width, int height);
        void draw() override;
};

#endif // BUTTON_H_
