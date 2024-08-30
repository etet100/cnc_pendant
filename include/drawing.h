#include <Adafruit_ILI9341.h>

#define BYTE_SWAP(x) (((x >> 8) & 0x00FF) | ((x << 8) & 0xFF00))

void drawImage(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const uint8_t w, const uint8_t h
);

void setFont(const uint8_t *data, const uint16_t *map);

void drawChar(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    byte char_,
    uint16_t color = ILI9341_WHITE
);

void drawFloatNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, float number, int padWithZeroesTo = 0);
void drawIntNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, int number, int padWithZeroesTo = 0);
