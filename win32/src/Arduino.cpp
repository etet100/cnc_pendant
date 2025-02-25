#include <QThread>
#include "forms/testwindow.h"
#include "Arduino.h"

extern TestWindow *wnd;

byte pgm_read_byte(const byte* addr) {
    return *addr;
}

word pgm_read_word(const word* addr) {
    return *addr;
}

uint32_t pgm_read_dword_near(const uint32_t* addr) {
    return *addr;
}

void memcpy_P(void* dest, const void* src, size_t n) {
    memcpy(dest, src, n);
}

void delayMicroseconds(int us) {
    QThread::usleep(us);
}

void delay(int ms) {
    QThread::msleep(ms);
}

unsigned long millis() {
    return GetTickCount();
}

int digitalRead(int pin) {
    // wheel
    if (pin == 0) {
        return !wnd->wheelPressed();
    }

    return 0;
}

void pinMode(int pin, int mode) {
}

void digitalWrite(int pin, int value) {
}

ESPClass ESP;
TwoWire Wire;
SerialClass Serial;
