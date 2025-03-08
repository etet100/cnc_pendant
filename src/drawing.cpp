#include "drawing.h"
#include "Arduino.h"
#include "fonts/font.h"
#include "nbSPI.h"
#include "screen.h"
#include "colors.h"

// static const uint8_t *fontData = nullptr;
// static const uint16_t *fontMap = nullptr;

// static uint16_t color[4];
// static uint16_t prevColor[4];

// const uint16_t defLimits[4] = {0, 319, 320, 320};
// uint16_t limits[4] = {0, 319, 320, 320};

// void setLimits(uint16_t y11, uint16_t y12, uint16_t y21, uint16_t y22) {
//     limits[0] = y11;
//     limits[1] = y12;
//     limits[2] = y21;
//     limits[3] = y22;
// }

// void resetLimits() {
//     memcpy(limits, defLimits, sizeof(limits));
// }

// inline static void writeAndWait(uint16_t* buf, uint16_t bytes) {
//     nbSPIwriteBytes((uint8_t*)buf, bytes);
//     while (nbSPIisBusy()) {
//         delayMicroseconds(1);
//     };
// }

// void setFont_(const uint8_t *data, const uint16_t *map) {
//     fontData = data;
//     fontMap = map;
// }

// void setTextColor(const uint16_t* color_, bool save) {
//     if (save) {
//         memcpy(prevColor, color, sizeof(color));
//     }
//     color[0] = pgm_read_word(&color_[0]);
//     color[1] = pgm_read_word(&color_[1]);
//     color[2] = pgm_read_word(&color_[2]);
//     color[3] = pgm_read_word(&color_[3]);
// }

// void restoreTextColor() {
//     memcpy(color, prevColor, sizeof(color));
// }

// inline bool applyLimitsToImage(uint16_t& y, uint16_t& h, const uint16_t*& image, uint16_t& size, const uint16_t w) {
//     uint16_t skipTop = 0;
//     uint16_t skipBottom = 0;
//     if (y <= limits[1]) {
//         // only top range is possible
//         skipTop = std::max(limits[0] - y, 0);
//         skipBottom = std::max((y + h) - limits[1], 0);
//     } else if (y + h >= limits[2]) {
//         skipTop = std::max(limits[2] - y, 0);
//         skipBottom = std::max((y + h) - limits[3], 0);
//     } else {
//         return false;
//     }
//     if (skipTop) {
//         y += skipTop;
//         h -= skipTop;
//         image += skipTop * w;
//         size -= skipTop * w * 2;
//     }
//     if (skipBottom) {
//         h -= skipBottom;
//         size -= skipBottom * w * 2;
//     }
//     // h is uint16_t, so it can't be negative
//     if (h > 10000) {
//         return false;
//     }

//     return true;
// }

// void drawImage(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     const uint16_t* image,
//     const uint16_t w, uint16_t h
// ) {
//     uint16_t size = w * h * 2;
//     if (!applyLimitsToImage(y, h, image, size, w)) {
//         return;
//     }

//     size += 4 - size % 4;

//     uint16_t* buf = (uint16_t*)malloc(size);
//     memcpy_P(buf, image, size);
//     tft.startWrite();
//     tft.setAddrWindow(x, y, w, h);
//     writeAndWait(buf, size);
//     tft.endWrite();
//     free(buf);
// }

// void drawImage(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     const uint16_t* image,
//     const ImageSize* size
// ) {
//     uint16_t h = size->height;
//     uint16_t s = size->size;
//     if (!applyLimitsToImage(y, h, image, s, size->width)) {
//         return;
//     }

//     uint16_t* buf = (uint16_t*)malloc(s);
//     memcpy_P(buf, image, s);
//     tft.startWrite();
//     tft.setAddrWindow(x, y, size->width, h);
//     writeAndWait(buf, s);
//     tft.endWrite();
//     free(buf);
// }

// void drawImage(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     const uint16_t* image,
//     const ImageSize size
// ) {
//     uint16_t h = size.height;
//     uint16_t s = size.size;
//     if (!applyLimitsToImage(y, h, image, s, size.width)) {
//         return;
//     }

//     uint16_t* buf = (uint16_t*)malloc(s);
//     memcpy_P(buf, image, s);
//     tft.startWrite();
//     tft.setAddrWindow(x, y, size.width, h);
//     writeAndWait(buf, s);
//     tft.endWrite();
//     free(buf);
// }

// void drawHLine(Adafruit_ILI9341& tft, uint16_t y, uint16_t color) {
//     if (!inLimits(y)) {
//         return;
//     }

//     tft.startWrite();
//     tft.setAddrWindow(0, y, SCREEN_WIDTH, 1);
//     uint16_t* buf = (uint16_t*)malloc(SCREEN_WIDTH * 2);
//     color = BYTE_SWAP(color);
//     uint16_t* pos = buf;
//     for (size_t i = 0; i < SCREEN_WIDTH; i++) {
//         *pos++ = color;
//     }
//     writeAndWait(buf, SCREEN_WIDTH * 2);
//     tft.endWrite();
//     free(buf);
// }

// inline bool applyLimitsToRect(uint16_t& y, uint16_t& h) {
//     uint16_t skipTop = 0;
//     uint16_t skipBottom = 0;
//     if (y <= limits[1]) {
//         // only top range is possible
//         skipTop = std::max(limits[0] - y, 0);
//         skipBottom = std::max((y + h) - limits[1], 0);
//     } else if (y + h >= limits[2]) {
//         skipTop = std::max(limits[2] - y, 0);
//         skipBottom = std::max((y + h) - limits[3], 0);
//     } else {
//         return false;
//     }
//     if (skipTop) {
//         y += skipTop;
//         h -= skipTop;
//     }
//     if (skipBottom) {
//         h -= skipBottom;
//     }

//     // h is uint16_t, so it can't be negative
//     return h < 10000;
// }

// void fillRect(Adafruit_ILI9341& tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint16_t color) {
//     if (!applyLimitsToRect(y, height)) {
//         return;
//     }

//     tft.startWrite();
//     tft.setAddrWindow(x, y, width, height);
//     uint16_t widthBytes = width * 2;
//     uint16_t* buf = (uint16_t*)malloc(widthBytes);
//     color = BYTE_SWAP(color);
//     uint16_t* pos = buf;
//     while (width--) {
//         *pos++ = color;
//     }
//     while (height--) {
//         writeAndWait(buf, widthBytes);
//     }
//     tft.endWrite();
//     free(buf);
// }

// bool applyLimitsToText(uint16_t& skipTop, uint16_t& skipBottom, uint16_t& y, uint16_t& h) {
//     if (y <= limits[1]) {
//         // only top range is possible
//         skipTop = std::max(limits[0] - y, 0);
//         skipBottom = std::max((y + h) - limits[1], 0);
//     } else if (y + h >= limits[2]) {
//         skipTop = std::max(limits[2] - y, 0);
//         skipBottom = std::max((y + h) - limits[3], 0);
//     } else {
//         return false;
//     }

//     if (skipTop) {
//         y += skipTop;
//         h -= skipTop;
//     }
//     if (skipBottom) {
//         h -= skipBottom;
//     }

//     // h is uint16_t, so it can't be negative
//     return h < 10000;
// }

// inline size_t drawChar(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     byte char_
// ) {
//     if (char_ < 32 || char_ > 128) {
//         return 0;
//     }

//     const uint8_t *fontData_ = fontData;
//     fontData_ += pgm_read_word(&fontMap[char_ - 32]);
//     uint16_t width = pgm_read_byte(fontData_++);
//     uint16_t height = pgm_read_byte(fontData_++);
//     assert(width > 0 && height > 0 && width <= 100 && height <= 100);

//     uint16_t h = height;
//     uint16_t skipTop = 0;
//     uint16_t skipBottom = 0;
//     if (!applyLimitsToText(skipTop, skipBottom, y, h)) {
//         return width;
//     }

//     // size without the bytes that are skipped at the top
//     uint16_t decodedSize = width * (height - skipTop) * sizeof(uint16_t);
//     assert(decodedSize > 0);
//     uint8_t fontByte = pgm_read_byte(fontData_++);

//     uint16_t *buf = (uint16_t*)malloc(decodedSize);
//     assert(buf != nullptr);
//     uint16_t *pos = buf;

//     // skip pixels at the top, keep bytes that are skipped at the bottom
//     uint16_t skipPixels = skipTop * width;
//     while (fontByte) {
//         uint8_t font_byte_color = fontByte & 0b11;
//         fontByte >>= 2; // = number of pixels
//         // skip pixels at the top
//         if (skipPixels) {
//             if (skipPixels >= fontByte) {
//                 // more than font_byte to skip
//                 skipPixels -= fontByte;
//                 fontByte = 0;
//             } else {
//                 // less than font_byte to skip
//                 fontByte -= skipPixels;
//                 skipPixels = 0;
//             }
//         }
//         while (fontByte--) {
//             *pos++ = color[font_byte_color];
//             assert(pos - buf <= width * height);
//         }
//         fontByte = pgm_read_byte(fontData_++);
//     }
    
//     tft.startWrite();
//     tft.setAddrWindow(x, y, width, h);
//     writeAndWait(
//         buf,
//         // skip pixels at the bottom
//         decodedSize - skipBottom * width * sizeof(uint16_t)
//     );
//     tft.endWrite();
    
//     assert(buf != nullptr);
//     free(buf);

//     return width;
// }

// inline size_t charWidth(byte char_)
// {
//     if (char_ < 32 || char_ > 128) {
//         return 0;
//     }

//     const uint8_t *font_data_ = fontData;
//     font_data_ += pgm_read_word(&fontMap[char_ - 32]);

//     return pgm_read_byte(font_data_++);
// }

// inline size_t textWidth(const char* text)
// {
//     size_t width = 0;
//     while (*text) {
//         width += charWidth(*text++);
//     }

//     return width;
// }

// inline void padding(int padTo, size_t length, uint16_t& x, Adafruit_ILI9341& tft, uint16_t y)
// {
//     int toPad = padTo - length;
//     if (toPad > 0) {
//         while (toPad--) {
//             x += drawChar(tft, x, y, '0');
//         }
//     }
// }

// inline void drawText_(char* text, uint16_t& x, Adafruit_ILI9341& tft, uint16_t y)
// {
//     while (*text) {
//         x += drawChar(tft, x, y, *text++);
//     }
// }

// void drawText(
//     Adafruit_ILI9341& tft,
//     uint16_t x, uint16_t y,
//     const char* text,
//     bool center
// ) {
//     if (center) {
//         x -= textWidth(text) / 2;
//     }

//     drawText_((char*)text, x, tft, y);
// }

// void drawIntNumber(Adafruit_ILI9341& tft, uint16_t x, uint16_t y, int number, const char* format, bool center)
// {
//     char buf[8];
//     sprintf(buf, format, number);

//     drawText(tft, x, y, buf, center);
// }

// void drawFloatNumber(Adafruit_ILI9341& tft, uint16_t x, uint16_t y, float number, const char* format, bool center)
// {
//     char buf[10];
//     sprintf(buf, format, number);

//     drawText(tft, x, y, buf, center);
// }

// inline void centerTextWithPadding(char* buf, int padWithZeroesTo, uint16_t& x)
// {
//     size_t width = textWidth(buf);
//     int toPad = padWithZeroesTo - strlen(buf);
//     if (toPad > 0) {
//         width += toPad * charWidth('0');
//     }
//     x -= (width / 2);
// }
