#ifndef A38162AF_A162_423D_BEA4_5F064E91A1FF
#define A38162AF_A162_423D_BEA4_5F064E91A1FF

#include <Arduino.h>

class AS5600 {
public:
    AS5600(TwoWire*) {}
    void begin() {}
    bool isConnected() { return true; }
    int32_t getCumulativePosition() { return 0; }
    float getAngularSpeed() { return 0; }
};

#endif /* A38162AF_A162_423D_BEA4_5F064E91A1FF */
