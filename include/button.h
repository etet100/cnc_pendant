#ifndef BUTTON_H_
#define BUTTON_H_

#include "drawable.h"
#include "touchzone.h"

class Button : public TouchZone, public Drawable {
    public:
        Button(Adafruit_ILI9341& tft, int x, int y, int width, int height, const uint16_t* image);
        bool isTouched(int x, int y) override;

    protected:
        void draw_() override;

    private:
        const uint16_t* image;
};

#endif // BUTTON_H_
