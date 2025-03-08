#include <Adafruit_ILI9341.h>
#include "images.h"
#include "colors.h"
#include "fonts/font.h"

// #define BYTE_SWAP(x) (((x >> 8) & 0x00FF) | ((x << 8) & 0xFF00))

// extern uint16_t limits[4];

// void setLimits(uint16_t y11, uint16_t y12, uint16_t y21 = 320, uint16_t y22 = 320);
// void resetLimits();

// inline bool inLimits1(uint16_t y) {
//     return (y >= limits[0] && y <= limits[1]);
// }

// inline bool inLimits2(uint16_t y) {
//     return (y >= limits[2] && y <= limits[3]);
// }

// inline bool inLimits(uint16_t y) {
//     return inLimits1(y) || inLimits2(y);
// }

// inline bool fullyInLimits1(uint16_t y1, uint16_t y2) {
//     return y1 >= limits[0] && y2 <= limits[1];
// }

// inline bool fullyInLimits2(uint16_t y1, uint16_t y2) {
//     // limits[2] != 320 means that the second pair of limits is not defined
//     return limits[2] != 320 && y1 >= limits[2] && y2 <= limits[3];
// }

// inline bool fullyInLimits(uint16_t y1, uint16_t y2) {
//     return fullyInLimits1(y1, y2) || fullyInLimits2(y1, y2);
// }

// inline bool partiallyInLimits(uint16_t y1, uint16_t y2) {
//     return inLimits(y1) || inLimits(y2);
// }

// void drawImage(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     const uint16_t* image,
//     const uint16_t w, const uint16_t h);

// void drawImage(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     const uint16_t* image,
//     const ImageSize* size
// );

// void drawImage(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     const uint16_t* image,
//     const ImageSize size
// );

// void setFont_(const uint8_t *data, const uint16_t *map);

// #define setFont(name, size) setFont_((const uint8_t*)font_##name##_##size, (const uint16_t*)font_##name##_##size##_map)

// void setTextColor(const uint16_t* color_, bool save = false);
// void restoreTextColor();

// size_t drawChar(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     byte char_
// );

// void drawText(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     const char* text,
//     bool center = false
// );

// // size_t charWidth(byte char_);
// size_t textWidth(const char* text);

// void drawFloatNumber(Adafruit_ILI9341& tft, uint16_t x, uint16_t y, float number, const char* format, bool center = false);
// void drawIntNumber(Adafruit_ILI9341& tft, uint16_t x, uint16_t y, int number, const char* format, bool center = false);

// void drawHLine(Adafruit_ILI9341& tft, uint16_t y, uint16_t color);

// void fillRect(Adafruit_ILI9341& tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint16_t color);
