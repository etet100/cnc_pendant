#include "drawing.h"
#include "Arduino.h"
#include "fonts/font.h"
#include "nbSPI.h"
#include "screen.h"

static const uint8_t *font_data = nullptr;
static const uint16_t *font_map = nullptr;

inline static void writeAndWait(uint16_t* buf, uint16_t bytes)
{
    nbSPI_writeBytes((uint8_t*)buf, bytes);
    while (nbSPI_isBusy()) {
        delayMicroseconds(3);
    };
}

void setFont_(const uint8_t *data, const uint16_t *map)
{
    font_data = data;
    font_map = map;
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
    for (size_t i = 0; i < SCREEN_WIDTH; i++) {
        buf[i] = BYTE_SWAP(color);
    }
    writeAndWait(buf, SCREEN_WIDTH * 2);
    tft->endWrite();
    free(buf);
}

size_t drawChar(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    byte char_,
    uint16_t color
) {
    if (char_ < 32 || char_ > 128) {
        return 0;
    }

    const uint8_t *font_data_ = font_data;
    font_data_ += pgm_read_word(&font_map[char_ - 32]);
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
            switch (font_byte_color) {
                case 0:
                    *pos++ = BYTE_SWAP(ILI9341_BLACK);
                    break;
                case 1:
                    *pos++ = BYTE_SWAP(ILI9341_DARKGREY);
                    break;
                case 2:
                    *pos++ = BYTE_SWAP(ILI9341_LIGHTGREY);
                    break;
                case 3:
                    *pos++ = BYTE_SWAP(ILI9341_WHITE);
                    break;
            }
            //*pos++ = font_byte_color == 0 ? BYTE_SWAP(ILI9341_BLACK) : color;
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

void drawText(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    const char* text,
    uint16_t color
) {
    while (*text) {
        x += drawChar(tft, x, y, *text++, color);
    }
}

void drawIntNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, int number, int padWithZeroesTo) {
    char buf[8];
    sprintf(buf, "%d", number);
    if (padWithZeroesTo > 0) {
        int toPad = padWithZeroesTo - strlen(buf);
        while (toPad-- > 0) {
            x += drawChar(tft, x, y, '0', BYTE_SWAP(ILI9341_DARKGREY));
            //x += 25;
        }
    }
    for (size_t i = 0; i < strlen(buf); i++) {
        x += drawChar(tft, x, y, buf[i]);
        // if (buf[i] == '.') {
        //     x += 10;
        // } else {
            // x += 25;
        // }
    }
}

void drawFloatNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, float number, int padWithZeroesTo) {
    char buf[8];
    sprintf(buf, "%4.3f", number);
    if (padWithZeroesTo > 0) {
        int toPad = padWithZeroesTo - strlen(buf);
        while (toPad-- > 0) {
            x += drawChar(tft, x, y, '0', BYTE_SWAP(ILI9341_DARKGREY));
        }
    }
    size_t len = strlen(buf);
    for (size_t i = 0; i < len; i++) {
        x += drawChar(tft, x, y, buf[i]);
    }
}
