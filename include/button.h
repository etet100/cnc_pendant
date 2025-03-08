#ifndef BUTTON_H_
#define BUTTON_H_

#include "drawable.h"
#include "touchzone.h"

class Button : public TouchZone, public Drawable {
    public:
        Button(Screen& tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height);
        bool isTouched(uint16_t x, uint16_t y) override;
        void setDown(bool down);

    protected:
        bool down = false;
};

class ImgButton : public Button {
    public:
        ImgButton(Screen& tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height, const uint16_t* image);
        void draw_() override;

    private:
        const uint16_t* image;
};

class SimpleButton : public Button {
    public:
        SimpleButton(Screen& tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height, const char* text = nullptr);
        void draw_() override;
        void setText(const char* text);

    private:
        const char* text;
};

#endif // BUTTON_H_
