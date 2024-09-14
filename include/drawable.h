#ifndef DRAWABLE_H_
#define DRAWABLE_H_

#include <Adafruit_ILI9341.h>

enum class Invalidation {
    None = -1,
    Foreground,
    All,
};

class Drawable {
public:
    Drawable(Adafruit_ILI9341 &tft, int x, int y, int width, int height);
    virtual void draw();
    void invalidate(Invalidation mode = Invalidation::All);
protected:
    Adafruit_ILI9341 &tft;
    int x;
    int y;
    int width;
    int height;
    Invalidation invalidation = Invalidation::All;
    virtual void draw_() {};
};

#endif // DRAWABLE_H_
