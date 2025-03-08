#ifndef DRAWABLE_H_
#define DRAWABLE_H_

#include "screen.h"

enum class Invalidation {
    None = -1,
    Foreground,
    All,
};

class Drawable
{
    public:
        Drawable(Screen& tft, int x, int y, int width, int height);
        virtual void draw();
        virtual void invalidate(Invalidation mode = Invalidation::All);

    protected:
        Screen& tft;
        int x;
        int y;
        int y2;
        int width;
        int height;
        Invalidation invalidation = Invalidation::All;
        virtual void draw_() { };
};

#endif // DRAWABLE_H_
