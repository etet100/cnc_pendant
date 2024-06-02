#include "mainpage.h"
#include "images.h"
#include "drawing.h"

MainPage::MainPage()
{
}

static uint16_t* image_btn1_() {
    static uint8_t im = 0;
    switch (im++ % 3) {
        case 0: return (uint16_t*)image_btn1;
        case 1: return (uint16_t*)image_btn2;
        case 2: return (uint16_t*)image_btn3;
    }
    return 0;
}

void MainPage::draw()
{
    drawImage(tft, 5, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 60, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 120, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 180, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);

    drawImage(tft, 5, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 60, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 120, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
    drawImage(tft, 5 + 180, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
}
