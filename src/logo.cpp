#include <Arduino.h>
#include "images.h"
#include "drawing.h"
#include "screen.h"

#define LOGO_PART_WIDTH 40
#define LOGO_PART_HEIGHT 33
#define LOGO_TOP 59

void logo(Screen &screen)
{
    const uint16_t* images[] = {
        image_logo00,
        0,
        image_logo10,
        image_logo01,
        0,
        image_logo20,
        image_logo11,
        image_logo02,
        0,
        image_logo30,
        image_logo21,
        image_logo12,
        image_logo03,
        0,
        image_logo40,
        image_logo31,
        image_logo22,
        image_logo13,
        image_logo04,
        0,
        image_logo50,
        image_logo41,
        image_logo32,
        image_logo23,
        image_logo14,
        image_logo05,
        0,
        image_logo51,
        image_logo42,
        image_logo33,
        image_logo24,
        image_logo15,
        0,
        image_logo52,
        image_logo43,
        image_logo34,
        image_logo25,
        0,
        image_logo53,
        image_logo44,
        image_logo35,
        0,
        image_logo54,
        image_logo45,
        0,
        image_logo55,
        (uint16_t*)1
    };

    int x0 = 0, x = x0;
    int y0 = LOGO_TOP, y = y0;

    const uint16_t** image = images;
    while (*image != (uint16_t*)1) {
        if (*image == 0) {
            delay(30);
            image++;
            if (x0 < 240 - LOGO_PART_WIDTH) {
                x0 += LOGO_PART_WIDTH;
            } else {
                y0 += LOGO_PART_HEIGHT;
            }
            x = x0;
            y = y0;
            continue;
        }

        drawImage(&screen.getTFT(), x, y, *image, LOGO_PART_WIDTH, LOGO_PART_HEIGHT);
        y += LOGO_PART_HEIGHT;
        x -= LOGO_PART_WIDTH;

        image++;
    }

    delay(1000);
}
