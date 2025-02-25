#include "forms/lcdwidget.h"
#include "forms/testwindow.h"
#include "PCA9536D.h"

extern LcdWidget *lcd;
extern TestWindow *wnd;

PCA9536::PCA9536()
{
}

void PCA9536::begin(TwoWire&)
{
}

void PCA9536::pinMode(int pin, int mode)
{
}

void PCA9536::digitalWrite(int pin, int value)
{
}

int PCA9536::digitalRead(int pin)
{
    return 0;
}

uint8_t PCA9536::readReg()
{
    // top = 4, bottom = 2
    uint8_t result = 0b11111001;
    if (!wnd->topPressed()) {
        result |= 0b100;
    }
    if (!wnd->bottomPressed()) {
        result |= 0b10;
    }

    return result;
}

void PCA9536::writeReg(uint8_t value)
{
}

void PCA9536::write(int pin, int value) {
    // LCD_BACKLIGHT_PIN
    if (pin == 3) {
        lcd->setBacklight(value == LOW);
    }
}

bool PCA9536::isConnected()
{
    return false;
}
