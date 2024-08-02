#ifndef BUTTONS_H_
#define BUTTONS_H_

#include <Wire.h>
#include <PCA9536D.h>

class Buttons {
public:
    Buttons(PCA9536 &pca9536d);
    void begin();
    void loop();
    bool isTopPressed();
    bool isBottomPressed();
    bool isWheelPressed();
private:
    PCA9536 &pca9536d;
    uint8_t regs;
    bool wheel;
};

#endif // BUTTONS_H_
