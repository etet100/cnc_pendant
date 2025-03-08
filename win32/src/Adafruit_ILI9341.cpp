#include <QImage>
#include <QPainter>
#include "forms/lcdwidget.h"
#include "Adafruit_ILI9341.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SPITFT.h"
#include "screen.h"

static unsigned short wndX = 0;
static unsigned short wndY = 0;
static unsigned short wndW = 240;
static unsigned short wndH = 320;
static unsigned short curX = wndX;
static unsigned short curY = wndY;

extern LcdWidget *lcd;

inline uint16_t c16(uint8_t **data) {
    return (*(*data)++ << 8) | *(*data)++;
}

inline QRgb fromC16(uint16_t c16) {
    uint8_t R5 = ( c16 >> 11 ) & 0x1F;
    uint8_t G6 = ( c16 >> 5 ) & 0x3F;
    uint8_t B5 = c16 & 0x1F;

    uint8_t R8 = ( R5 * 527 + 23 ) >> 6;
    uint8_t G8 = ( G6 * 259 + 33 ) >> 6;
    uint8_t B8 = ( B5 * 527 + 23 ) >> 6;

    return QColor(R8, G8, B8).rgb();
}

Adafruit_ILI9341::Adafruit_ILI9341(int8_t _CS, int8_t _DC, int8_t _MOSI, int8_t _SCLK, int8_t _RST, int8_t _MISO) : Adafruit_SPITFT(SCREEN_WIDTH, SCREEN_HEIGHT, _CS, _DC, _RST) {
}

Adafruit_ILI9341::Adafruit_ILI9341(int8_t _CS, int8_t _DC, int8_t _RST) : Adafruit_SPITFT(SCREEN_WIDTH, SCREEN_HEIGHT, _CS, _DC, _RST) {
}

void Adafruit_ILI9341::begin(unsigned int) {
}

void Adafruit_ILI9341::setAddrWindow(unsigned short x, unsigned short y, unsigned short w, unsigned short h) {
    curX = wndX = x;
    curY = wndY = y;
    wndW = w;
    wndH = h;
}

void Adafruit_ILI9341::invertDisplay(bool) {
}

void Adafruit_ILI9341::setRotation(unsigned char) {
}

Adafruit_GFX::Adafruit_GFX(short w , short h) : _width(w), _height(h) {
}

void Adafruit_GFX::drawCircle(short, short, short, unsigned short) {
}

void Adafruit_GFX::drawPixel(int16_t x, int16_t y, uint16_t color) {
    QImage *img = lcd->image();
    img->setPixelColor(curX, curY, fromC16(color));
    lcd->unlock();    
}

void Adafruit_GFX::startWrite(void) {}
void Adafruit_GFX::writePixel(int16_t x, int16_t y, uint16_t color) {}
void Adafruit_GFX::writeFillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color)  {}
void Adafruit_GFX::writeFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color) {}
void Adafruit_GFX::writeFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color) {}
void Adafruit_GFX::writeLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
                         uint16_t color) {}
void Adafruit_GFX::endWrite(void) {}

void Adafruit_GFX::setRotation(uint8_t r) {}
void Adafruit_GFX::invertDisplay(bool i) {}

void Adafruit_GFX::drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color) {}
void Adafruit_GFX::drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color) {}
void Adafruit_GFX::fillRect(int16_t x, int16_t y, int16_t w, int16_t h,
                        uint16_t color) {}
void Adafruit_GFX::fillScreen(uint16_t color) {
    fillRect(0, 0, width(), height(), color);
}
void Adafruit_GFX::drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) {}

void Adafruit_GFX::drawRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) {

}

size_t Adafruit_GFX::write(unsigned char) {
}

Adafruit_SPITFT::Adafruit_SPITFT(unsigned short w, unsigned short h, signed char, signed char, signed char, signed char, signed char, signed char) :
    Adafruit_GFX(w, h) {

}

Adafruit_SPITFT::Adafruit_SPITFT(unsigned short w, unsigned short h, signed char, signed char, signed char) :
    Adafruit_GFX(w, h) {
}

void Adafruit_SPITFT::drawPixel(short, short, unsigned short) {
}

void Adafruit_SPITFT::startWrite() {
}

void Adafruit_SPITFT::writePixel(short, short, unsigned short) {
}

void Adafruit_SPITFT::writeFillRect(short, short, short, short, unsigned short) {
}

void Adafruit_SPITFT::writeFastVLine(short, short, short, unsigned short) {
}

void Adafruit_SPITFT::writeFastHLine(short, short, short, unsigned short) {
}

void Adafruit_SPITFT::fillRect(short x, short y, short w, short h, unsigned short c16) {
    QImage *img = lcd->image();
    QPainter painter(img);
    painter.fillRect(x, y, w, h, fromC16(c16));
    painter.end();
    lcd->unlock();
}

void Adafruit_SPITFT::endWrite() {
}

void Adafruit_SPITFT::invertDisplay(bool) {
}

void Adafruit_SPITFT::drawFastVLine(short, short, short, unsigned short) {
}

void Adafruit_SPITFT::drawFastHLine(short, short, short, unsigned short) {
}

void nbSPIwriteBytes(uint8_t *data, uint16_t size) {
    QImage *img = lcd->image();

    size >>= 1;
    while (size--) {
        img->setPixel(curX, curY, fromC16(c16(&data)));
        curX++;
        if (curX >= wndX + wndW) {
            curX = wndX;
            curY++;
            if (curY >= wndY + wndH) {
                curY = wndY;
            }
        }
    }
    lcd->unlock();
}

boolean nbSPIisBusy() { return false; }
