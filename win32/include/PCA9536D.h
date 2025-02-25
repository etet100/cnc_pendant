#ifndef PCA9536D_H
#define PCA9536D_H

#include <cstdint>
#include <Arduino.h>

class PCA9536 
{
    public:
        PCA9536();
        void begin(TwoWire&);
        void pinMode(int pin, int mode);
        void digitalWrite(int pin, int value);
        int digitalRead(int pin);
        uint8_t readReg();
        bool isConnected();
        void writeReg(uint8_t value);
        void write(int pin, int value);
};

#endif // PCA9536D_H