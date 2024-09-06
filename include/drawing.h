#include <Adafruit_ILI9341.h>
#include "images.h"

#define BYTE_SWAP(x) (((x >> 8) & 0x00FF) | ((x << 8) & 0xFF00))

void drawImage(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const uint8_t w, const uint8_t h
);

void drawImage(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const ImageSize* size
);

void drawImage(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const ImageSize size
);

void setFont_(const uint8_t *data, const uint16_t *map);

#define setFont(name, size) setFont_((const uint8_t*)font_##name##_##size, (const uint16_t*)font_##name##_##size##_map)

size_t drawChar(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    byte char_,
    uint16_t color = ILI9341_WHITE
);

void drawText(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const char* text,
    uint16_t color = ILI9341_WHITE,
    bool center = false
);

// size_t charWidth(byte char_);
size_t textWidth(const char* text);

void drawFloatNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, float number, const char* format, bool center = false);
// void drawTextWithPadding(bool center, char buf[10], int padWithZeroesTo, uint16_t& x, Adafruit_ILI9341* tft, uint16_t y);
// void centerTextWithPadding(char buf[10], int padWithZeroesTo, uint16_t& x);
void drawIntNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, int number, const char* format, bool center = false);

void drawHLine(Adafruit_ILI9341* tft, uint16_t y, uint16_t color);
