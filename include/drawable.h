#ifndef DRAWABLE_H_
#define DRAWABLE_H_

#include <Adafruit_ILI9341.h>

class Drawable {
public:
    Drawable(Adafruit_ILI9341 &tft, int x, int y, int width, int height);
    virtual void draw() = 0;
protected:
    Adafruit_ILI9341 &tft;
    int x;
    int y;
    int width;
    int height;
};

#endif // DRAWABLE_H_
