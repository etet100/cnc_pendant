#ifndef FCC594EA_E648_43C1_841D_AAF3D70F028B
#define FCC594EA_E648_43C1_841D_AAF3D70F028B

#include "Arduino.h"

class I2C_eeprom {
public:
    I2C_eeprom(uint8_t addr, uint32_t size) {};
    void begin() {};
    bool isConnected() { return true; };
    uint32_t determineSize(bool) { return 1024; };
};

#endif /* FCC594EA_E648_43C1_841D_AAF3D70F028B */
