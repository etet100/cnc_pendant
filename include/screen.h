#ifndef SCREEN_H_
#define SCREEN_H_

#include <Adafruit_ILI9341.h>
#include "buttons.h"
#include "images.h"

#define SCREEN_WIDTH 240
#define SCREEN_WIDTH_HALF 120
#define SCREEN_HEIGHT 320
#define BYTE_SWAP(x) (((x >> 8) & 0x00FF) | ((x << 8) & 0xFF00))
#define FT(name, size) (const uint8_t*)font_##name##_##size, (const uint16_t*)font_##name##_##size##_map

class Screen : public Adafruit_ILI9341
{
    public:
        Screen();
        void begin(uint32_t freq = 0) override;
        void clear();

        void drawImage(uint16_t x, uint16_t y, const uint16_t* image, const uint16_t w, const uint16_t h);
        void drawImage(uint16_t x, uint16_t y, const uint16_t* image, const ImageSize* size);
        void drawImage(uint16_t x, uint16_t y, const uint16_t* image, const ImageSize size);

        void setFont(const uint8_t *data, const uint16_t *map);
        void setTextPalette(const uint16_t* palette, bool save = false);
        void restoreTextPalette();

        size_t charWidth(byte char_);
        size_t textWidth(const char* text);
        size_t drawChar(uint16_t x, uint16_t y, byte char_);
        void drawText(uint16_t x, uint16_t y, const char* text, bool center = false);

        void drawFloatNumber(uint16_t x, uint16_t y, float number, const char* format, bool center = false);
        void drawIntNumber(uint16_t x, uint16_t y, int number, const char* format, bool center = false);

        void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color) override;
        void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color) override;

        void fillRect(short x, short y, short w, short h, unsigned short c16) override;

        void setLimits(uint16_t y11, uint16_t y12, uint16_t y21 = 320, uint16_t y22 = 320);
        void resetLimits();

        inline bool inLimits1(uint16_t y) {
            return (y >= limits[0] && y <= limits[1]);
        }

        inline bool inLimits2(uint16_t y) {
            return (y >= limits[2] && y <= limits[3]);
        }

        inline bool inLimits(uint16_t y) {
            return inLimits1(y) || inLimits2(y);
        }

        inline bool fullyInLimits1(uint16_t y1, uint16_t y2) {
            return y1 >= limits[0] && y2 <= limits[1];
        }

        inline bool fullyInLimits2(uint16_t y1, uint16_t y2) {
            // limits[2] != 320 means that the second pair of limits is not defined
            return limits[2] != 320 && y1 >= limits[2] && y2 <= limits[3];
        }

        inline bool fullyInLimits(uint16_t y1, uint16_t y2) {
            return fullyInLimits1(y1, y2) || fullyInLimits2(y1, y2);
        }

        inline bool partiallyInLimits(uint16_t y1, uint16_t y2) {
            return inLimits(y1) || inLimits(y2);
        }

    private:
        uint16_t fontPalette[4];
        uint16_t prevFontPalette[4];
        const uint8_t *fontData = nullptr;
        const uint16_t *fontMap = nullptr;
        uint16_t limits[4];
        bool applyLimitsToImage(uint16_t &y, uint16_t &h, const uint16_t *&image, uint16_t &size, const uint16_t w);
        bool applyLimitsToText(uint16_t &skipTop, uint16_t &skipBottom, uint16_t &y, uint16_t &h);
        bool applyLimitsToRect(short &y, short &h);
        inline void drawText_(char *text, uint16_t &x, uint16_t y);
};


#endif // SCREEN_H_
