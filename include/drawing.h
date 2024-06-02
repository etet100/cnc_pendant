#include <Adafruit_ILI9341.h>

void drawImage(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const uint8_t w, const uint8_t h
);

void drawChar(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    byte char_,
    uint16_t color = ILI9341_WHITE
);

void drawNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, int number, int padWithZeroesTo = 0);
