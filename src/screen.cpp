#include "screen.h"
#include "colors.h"
#include "drawing.h"
#include <Arduino.h>
#include <HardwareSerial.h>
#include "nbSPI.h"

#define ADAGFX_PIN_CS D8 // Display chip select
#define ADAGFX_PIN_DC D2 // Display SPI data/command
#define ADAGFX_PIN_RST D1 // Display Reset
#define SPI_FREQUENCY 35000000

const uint16_t defLimits[4] = {0, 319, 320, 320};

inline static void writeAndWait(uint16_t* buf, uint16_t bytes) {
    nbSPIwriteBytes((uint8_t*)buf, bytes);
    while (nbSPIisBusy()) {
        delayMicroseconds(1);
    };
}

Screen::Screen() : Adafruit_ILI9341(/*SCREEN_WIDTH, SCREEN_HEIGHT*/ ADAGFX_PIN_CS, ADAGFX_PIN_DC, ADAGFX_PIN_RST) {
}

void Screen::begin(uint32_t) {
    Serial.println("Initializing screen...");

    Adafruit_ILI9341::begin(SPI_FREQUENCY);
    setRotation(2);

    clear();

    setTextPalette(WHITE_ON_BLACK);

    Serial.println(" Result: initialized");
}

void Screen::clear() {
    fillScreen(ILI9341_BLACK);
}

void Screen::setTextPalette(const uint16_t *palette, bool save) {
    if (save) {
        memcpy(prevFontPalette, this->fontPalette, sizeof(this->fontPalette));
    }
    this->fontPalette[0] = pgm_read_word(&palette[0]);
    this->fontPalette[1] = pgm_read_word(&palette[1]);
    this->fontPalette[2] = pgm_read_word(&palette[2]);
    this->fontPalette[3] = pgm_read_word(&palette[3]);
}

void Screen::restoreTextPalette() {
    memcpy(fontPalette, prevFontPalette, sizeof(fontPalette));
}

inline bool Screen::applyLimitsToImage(uint16_t& y, uint16_t& h, const uint16_t*& image, uint16_t& size, const uint16_t w) {
    uint16_t skipTop = 0;
    uint16_t skipBottom = 0;
    if (y <= limits[1]) {
        // only top range is possible
        skipTop = std::max(limits[0] - y, 0);
        skipBottom = std::max((y + h) - limits[1], 0);
    } else if (y + h >= limits[2]) {
        skipTop = std::max(limits[2] - y, 0);
        skipBottom = std::max((y + h) - limits[3], 0);
    } else {
        return false;
    }
    if (skipTop) {
        y += skipTop;
        h -= skipTop;
        image += skipTop * w;
        size -= skipTop * w * 2;
    }
    if (skipBottom) {
        h -= skipBottom;
        size -= skipBottom * w * 2;
    }

    // h is uint16_t, so it can't be negative
    return h < 10000 && h > 0;
}

void Screen::drawImage(
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const uint16_t w, uint16_t h
) {
    uint16_t size = w * h * 2;
    if (!applyLimitsToImage(y, h, image, size, w)) {
        return;
    }

    size += 4 - size % 4;

    uint16_t* buf = (uint16_t*)malloc(size);
    memcpy_P(buf, image, size);
    startWrite();
    setAddrWindow(x, y, w, h);
    writeAndWait(buf, size);
    endWrite();
    free(buf);
}

void Screen::drawImage(
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const ImageSize* size
) {
    uint16_t h = size->height;
    uint16_t s = size->size;
    if (!applyLimitsToImage(y, h, image, s, size->width)) {
        return;
    }

    uint16_t* buf = (uint16_t*)malloc(s);
    memcpy_P(buf, image, s);
    startWrite();
    setAddrWindow(x, y, size->width, h);
    writeAndWait(buf, s);
    endWrite();
    free(buf);
}

void Screen::drawImage(
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const ImageSize size
) {
    uint16_t h = size.height;
    uint16_t s = size.size;
    if (!applyLimitsToImage(y, h, image, s, size.width)) {
        return;
    }

    uint16_t* buf = (uint16_t*)malloc(s);
    memcpy_P(buf, image, s);
    startWrite();
    setAddrWindow(x, y, size.width, h);
    writeAndWait(buf, s);
    endWrite();
    free(buf);
}

void Screen::setFont(const uint8_t *data, const uint16_t *map)
{
    fontData = data;
    fontMap = map;
}

size_t Screen::charWidth(byte char_) {
    if (char_ < 32 || char_ > 128) {
        return 0;
    }

    const uint8_t *font_data_ = fontData;
    font_data_ += pgm_read_word(&fontMap[char_ - 32]);

    return pgm_read_byte(font_data_++);
}

size_t Screen::textWidth(const char* text) {
    size_t width = 0;
    while (*text) {
        width += charWidth(*text++);
    }

    return width;
}

bool Screen::applyLimitsToText(uint16_t& skipTop, uint16_t& skipBottom, uint16_t& y, uint16_t& h) {
    if (y <= limits[1]) {
        // only top range is possible
        skipTop = std::max(limits[0] - y, 0);
        skipBottom = std::max((y + h) - limits[1], 0);
    } else if (y + h >= limits[2]) {
        skipTop = std::max(limits[2] - y, 0);
        skipBottom = std::max((y + h) - limits[3], 0);
    } else {
        return false;
    }

    if (skipTop) {
        y += skipTop;
        h -= skipTop;
    }
    if (skipBottom) {
        h -= skipBottom;
    }

    // h is uint16_t, so it can't be negative
    return h < 10000 && h > 0;
}

size_t Screen::drawChar(uint16_t x, uint16_t y, byte char_) {
    if (char_ < 32 || char_ > 128) {
        return 0;
    }

    const uint8_t *fontData_ = fontData;
    fontData_ += pgm_read_word(&fontMap[char_ - 32]);
    uint16_t width = pgm_read_byte(fontData_++);
    uint16_t height = pgm_read_byte(fontData_++);
    assert(width > 0 && height > 0 && width <= 100 && height <= 100);

    uint16_t h = height;
    uint16_t skipTop = 0;
    uint16_t skipBottom = 0;
    if (!applyLimitsToText(skipTop, skipBottom, y, h)) {
        return width;
    }

    // size without the bytes that are skipped at the top
    uint16_t decodedSize = width * (height - skipTop) * sizeof(uint16_t);
    assert(decodedSize > 0);
    uint8_t fontByte = pgm_read_byte(fontData_++);

    uint16_t *buf = (uint16_t*)malloc(decodedSize);
    assert(buf != nullptr);
    uint16_t *pos = buf;

    // skip pixels at the top, keep bytes that are skipped at the bottom
    uint16_t skipPixels = skipTop * width;
    while (fontByte) {
        uint8_t font_byte_color = fontByte & 0b11;
        fontByte >>= 2; // = number of pixels
        // skip pixels at the top
        if (skipPixels) {
            if (skipPixels >= fontByte) {
                // more than font_byte to skip
                skipPixels -= fontByte;
                fontByte = 0;
            } else {
                // less than font_byte to skip
                fontByte -= skipPixels;
                skipPixels = 0;
            }
        }
        while (fontByte--) {
            *pos++ = fontPalette[font_byte_color];
            assert(pos - buf <= width * height);
        }
        fontByte = pgm_read_byte(fontData_++);
    }

    startWrite();
    setAddrWindow(x, y, width, h);
    writeAndWait(
        buf,
        // skip pixels at the bottom
        decodedSize - skipBottom * width * sizeof(uint16_t)
    );
    endWrite();

    assert(buf != nullptr);
    free(buf);

    return width;
}

void Screen::drawText_(char* text, uint16_t& x, uint16_t y) {
    while (*text) {
        x += drawChar(x, y, *text++);
    }
}

void Screen::drawText(uint16_t x, uint16_t y, const char *text, bool center) {
    if (center) {
        x -= textWidth(text) / 2;
    }

    drawText_((char*)text, x, y);
}

void Screen::drawIntNumber(uint16_t x, uint16_t y, int number, const char* format, bool center) {
    char buf[8];
    sprintf(buf, format, number);

    drawText(x, y, buf, center);
}

void Screen::drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color) {
    if (!applyLimitsToRect(y, h)) {
        return;
    }

    startWrite();
    setAddrWindow(x, y, 1, h);
    uint16_t* buf = (uint16_t*)malloc(h * 2);
    color = BYTE_SWAP(color);
    uint16_t* pos = buf;
    while (h--) {
        *pos++ = color;
    }
    writeAndWait(buf, h * 2);
    endWrite();
    free(buf);
}

void Screen::drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color) {
    int16_t h;
    if (!applyLimitsToRect(y, h)) {
        return;
    }

    startWrite();
    setAddrWindow(x, y, w, 1);
    uint16_t* buf = (uint16_t*)malloc(w * 2);
    color = BYTE_SWAP(color);
    uint16_t* pos = buf;
    while (w--) {
        *pos++ = color;
    }
    writeAndWait(buf, w * 2);
    endWrite();
    free(buf);
}

void Screen::drawFloatNumber(uint16_t x, uint16_t y, float number, const char* format, bool center) {
    char buf[10];
    sprintf(buf, format, number);

    drawText(x, y, buf, center);
}

inline bool Screen::applyLimitsToRect(short& y, short& h) {
    uint16_t skipTop = 0;
    uint16_t skipBottom = 0;
    if (y <= limits[1]) {
        // only top range is possible
        skipTop = std::max(limits[0] - y, 0);
        skipBottom = std::max((y + h) - limits[1], 0);
    } else if (y + h >= limits[2]) {
        skipTop = std::max(limits[2] - y, 0);
        skipBottom = std::max((y + h) - limits[3], 0);
    } else {
        return false;
    }
    if (skipTop) {
        y += skipTop;
        h -= skipTop;
    }
    if (skipBottom) {
        h -= skipBottom;
    }

    // h is uint16_t, so it can't be negative
    return h < 10000 && h > 0;
}

void Screen::fillRect(short x, short y, short w, short h, unsigned short color) {
    if (!applyLimitsToRect(y, h)) {
        return;
    }

    startWrite();
    setAddrWindow(x, y, w, h);
    uint16_t widthBytes = w * 2;
    uint16_t* buf = (uint16_t*)malloc(widthBytes);
    color = BYTE_SWAP(color);
    uint16_t* pos = buf;
    while (w--) {
        *pos++ = color;
    }
    while (h--) {
        writeAndWait(buf, widthBytes);
    }
    endWrite();
    free(buf);
}

void Screen::setLimits(uint16_t y11, uint16_t y12, uint16_t y21, uint16_t y22) {
    limits[0] = y11;
    limits[1] = y12;
    limits[2] = y21;
    limits[3] = y22;
}

void Screen::resetLimits() {
    memcpy(limits, defLimits, sizeof(limits));
}
