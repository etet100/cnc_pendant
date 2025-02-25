#ifndef ADAFRUIT_FT6206_H
#define ADAFRUIT_FT6206_H

#include "Arduino.h"

class TS_Point {
    public:
        TS_Point(void);
        TS_Point(int16_t x, int16_t y, int16_t z);
      
        bool operator==(TS_Point);
        bool operator!=(TS_Point);
      
        int16_t x; /*!< X coordinate */
        int16_t y; /*!< Y coordinate */
        int16_t z; /*!< Z coordinate (often used for pressure) */
};

class Adafruit_FT6206 {
public:
    bool touched(void);
    bool begin(uint8_t thresh, TwoWire *theWire) { return true; }
    TS_Point getPoint(void);
};

#endif // ADAFRUIT_FT6206_H
