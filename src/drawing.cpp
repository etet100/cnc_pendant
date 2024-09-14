#include "drawing.h"
#include "Arduino.h"
#include "fonts/font.h"
#include "nbSPI.h"
#include "screen.h"
#include "colors.h"

static const uint8_t *fontData = nullptr;
static const uint16_t *fontMap = nullptr;

static uint16_t color[4];
static uint16_t prevColor[4];

inline static void writeAndWait(uint16_t* buf, uint16_t bytes)
{
    nbSPI_writeBytes((uint8_t*)buf, bytes);
    while (nbSPI_isBusy()) {
        delayMicroseconds(2);
    };
}

void setFont_(const uint8_t *data, const uint16_t *map)
{
    fontData = data;
    fontMap = map;
}

void setTextColor(const uint16_t* color_, bool save)
{
    if (save) {
        memcpy(prevColor, color, sizeof(color));
    }
    color[0] = pgm_read_word(&color_[0]);
    color[1] = pgm_read_word(&color_[1]);
    color[2] = pgm_read_word(&color_[2]);
    color[3] = pgm_read_word(&color_[3]);
}

void restoreTextColor()
{
    memcpy(color, prevColor, sizeof(color));
}

void drawImage(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const uint8_t w, const uint8_t h
) {
    uint16_t size = w * h * 2;
    uint16_t* buf = (uint16_t*)malloc(size);
    memcpy_P(buf, image, size);
    tft->startWrite();
    tft->setAddrWindow(x, y, w, h);
    writeAndWait(buf, size);
    tft->endWrite();
    free(buf);
}

void drawImage(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const ImageSize* size
) {
    uint16_t* buf = (uint16_t*)malloc(size->size);
    memcpy_P(buf, image, size->size);
    tft->startWrite();
    tft->setAddrWindow(x, y, size->width, size->height);
    writeAndWait(buf, size->size);
    tft->endWrite();
    free(buf);
}

void drawImage(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const uint16_t* image,
    const ImageSize size
) {
    uint16_t* buf = (uint16_t*)malloc(size.size);
    memcpy_P(buf, image, size.size);
    tft->startWrite();
    tft->setAddrWindow(x, y, size.width, size.height);
    writeAndWait(buf, size.size);
    tft->endWrite();
    free(buf);
}

void drawHLine(Adafruit_ILI9341* tft, uint16_t y, uint16_t color) {
    tft->startWrite();
    tft->setAddrWindow(0, y, SCREEN_WIDTH, 1);
    uint16_t* buf = (uint16_t*)malloc(SCREEN_WIDTH * 2);
    color = BYTE_SWAP(color);
    uint16_t* pos = buf;
    for (size_t i = 0; i < SCREEN_WIDTH; i++) {
        *pos++ = color;
    }
    writeAndWait(buf, SCREEN_WIDTH * 2);
    tft->endWrite();
    free(buf);
}

void fillRect(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint16_t color) {
    tft->startWrite();
    tft->setAddrWindow(x, y, width, height);
    uint16_t widthBytes = width * 2;
    uint16_t* buf = (uint16_t*)malloc(widthBytes);
    color = BYTE_SWAP(color);
    uint16_t* pos = buf;
    while (width--) {
        *pos++ = color;
    }
    while (height--) {
        writeAndWait(buf, widthBytes);
    }
    tft->endWrite();
    free(buf);
}

size_t drawChar(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    byte char_
) {
    if (char_ < 32 || char_ > 128) {
        return 0;
    }

    const uint8_t *font_data_ = fontData;
    font_data_ += pgm_read_word(&fontMap[char_ - 32]);
    uint8_t width = pgm_read_byte(font_data_++);
    uint8_t height = pgm_read_byte(font_data_++);
    if (width == 0 || height == 0 || width > 100 || height > 100) {
        return 0;
    }
    uint16_t decoded_size = width * height * 2;
    uint16_t *buf = (uint16_t*)malloc(decoded_size);
    uint16_t *pos = buf;
    char font_byte = pgm_read_byte(font_data_++);
    while (font_byte) {
        uint8_t font_byte_color = font_byte & 0b11;
        font_byte >>= 2;
        while (font_byte--) {
            *pos++ = color[font_byte_color];
        }
        font_byte = pgm_read_byte(font_data_++);
    }
    tft->startWrite();
    tft->setAddrWindow(x, y, width, height);
    writeAndWait(buf, decoded_size);
    tft->endWrite();
    free(buf);

    return width;
}

inline size_t charWidth(byte char_)
{
    if (char_ < 32 || char_ > 128) {
        return 0;
    }

    const uint8_t *font_data_ = fontData;
    font_data_ += pgm_read_word(&fontMap[char_ - 32]);

    return pgm_read_byte(font_data_++);
}

size_t textWidth(const char* text)
{
    size_t width = 0;
    while (*text) {
        width += charWidth(*text++);
    }

    return width;
}

inline void padding(int padTo, size_t length, uint16_t& x, Adafruit_ILI9341* tft, uint16_t y)
{
    int toPad = padTo - length;
    if (toPad > 0) {
        while (toPad--) {
            x += drawChar(tft, x, y, '0');
        }
    }
}

inline void drawText_(char* text, uint16_t& x, Adafruit_ILI9341* tft, uint16_t y)
{
    while (*text) {
        x += drawChar(tft, x, y, *text++);
    }
}

void drawText(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const char* text,
    bool center
) {
    if (center) {
        x -= textWidth(text) / 2;
    }

    drawText_((char*)text, x, tft, y);
}

void drawIntNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, int number, const char* format, bool center)
{
    char buf[8];
    sprintf(buf, format, number);

    drawText(tft, x, y, buf, center);
}

void drawFloatNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, float number, const char* format, bool center)
{
    char buf[10];
    sprintf(buf, format, number);

    drawText(tft, x, y, buf, center);
}

inline void centerTextWithPadding(char* buf, int padWithZeroesTo, uint16_t& x)
{
    size_t width = textWidth(buf);
    int toPad = padWithZeroesTo - strlen(buf);
    if (toPad > 0) {
        width += toPad * charWidth('0');
    }
    x -= (width / 2);
}
