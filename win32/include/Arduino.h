#ifndef BAD45CA0_08CF_4271_A711_E81BB63DC924
#define BAD45CA0_08CF_4271_A711_E81BB63DC924

#include <windows.h>
#include <QDebug>
#include <cstdint>
#include <functional>
#include <stdbool.h>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <algorithm>

#define HIGH 1
#define LOW 0
#define INPUT 0
#define OUTPUT 1

#define D0 0
#define D1 1
#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define D8 8

int digitalRead(int pin);
void pinMode(int pin, int mode);
void digitalWrite(int pin, int value);

#define DEC 10

class SerialClass {
    public:
        void begin(int baudrate) {};
        void print(const char* message) {
            qDebug() << message;
        };
        void print(uint32_t value) {};
        void print(uint32_t value, int format) {};
        void print(int32_t value, int format) {};
        void printf(const char* format, ...) {
        };
        void println(const char* message) {
            qDebug() << message;
        };
        void println(uint32_t value) {
            qDebug() << value;
        };
        void println(uint32_t value, int format) {
            qDebug() << value;
        };
        void write(uint8_t value) {};
        void write(const char* buffer) {
            qDebug() << buffer;
        };
};

typedef int BitOrder;

extern SerialClass Serial;

class String {
public:
    char* c_str() {
        return nullptr;
    }
};

class TwoWire {
public:
    void setClock(uint32_t clock) {};
    void begin(int sda, int scl) {};
    void beginTransmission(uint8_t address) {};
};

#define I2C_DEVICESIZE_24LC08 0x100

extern TwoWire Wire;

//typedef bool boolean;
typedef uint8_t byte;
typedef uint16_t word;
typedef unsigned long ulong;

byte pgm_read_byte(const byte* addr);
word pgm_read_word(const word* addr);
uint32_t pgm_read_dword_near(const uint32_t* addr);
void memcpy_P(void* dest, const void* src, size_t n);
void delayMicroseconds(int us);
void delay(int ms);
unsigned long millis();

class __FlashStringHelper {
};

class ESPClass {
public:
    void wdtDisable() {};
};

extern ESPClass ESP;

#define PROGMEM
#define IRAM_ATTR
#define yield()
#define PSTR(s) s
#define F(s) s

#endif /* BAD45CA0_08CF_4271_A711_E81BB63DC924 */
