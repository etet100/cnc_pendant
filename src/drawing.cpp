#include "drawing.h"
#include "Arduino.h"
#include "fonts/font.h"
#include "nbSPI.h"

inline static void writeAndWait(uint16_t* buf, uint16_t bytes)
{
    nbSPI_writeBytes((uint8_t*)buf, bytes);
    while (nbSPI_isBusy()) {
        delayMicroseconds(3);
    };
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

void drawChar(
    Adafruit_ILI9341* tft,
    uint16_t x, uint16_t y,
    byte char_
) {
    if (char_ < 48 || char_ > 57) {
        return;
    }

    const uint8_t *font_data = font_7seg;
    font_data += pgm_read_word(&font_7seg_map[char_ - 32]);
    uint8_t width = pgm_read_byte(font_data++);
    uint8_t height = pgm_read_byte(font_data++);
    if (width == 0 || height == 0 || width > 100 || height > 100) {
        return;
    }
    uint16_t decoded_size = width * height * 2;
    uint16_t *buf = (uint16_t*)malloc(decoded_size);
    uint16_t *pos = buf;
    char font_byte = pgm_read_byte(font_data++);
    while (font_byte) {
        uint8_t color = font_byte & 0b11;
        font_byte >>= 2;
        while (font_byte--) {
            *pos++ = color == 0 ? ILI9341_BLACK : ILI9341_WHITE;
        }
        font_byte = pgm_read_byte(font_data++);
    }
    tft->startWrite();
    tft->setAddrWindow(x, y, width, height);
    writeAndWait(buf, decoded_size);
    tft->endWrite();
    free(buf);
}

void drawNumber(Adafruit_ILI9341* tft, uint16_t x, uint16_t y, int number) {
    char buf[10];
    sprintf(buf, "%d", number);
    for (size_t i = 0; i < strlen(buf); i++) {
        drawChar(tft, x + i * 32, y, buf[i]);
    }
}
