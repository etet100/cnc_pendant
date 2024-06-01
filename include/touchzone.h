#ifndef TOUCHZONE_H_
#define TOUCHZONE_H_

class TouchZone {
public:
    TouchZone(int x, int y, int width, int height);
    bool isTouched(int x, int y);
private:
    int x1, y1, x2, y2;
};

#endif // TOUCHZONE_H_
