#include "Arduino.h"
#include "images.h"

// wifi.png
// width 40
// height 102
// mode RGB

static const ImageSize image_wifi_size = {40, 102, 8160};
static const uint16_t image_wifi[] PROGMEM = {
0x0000, 0x1140, 0x1d68, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x1140, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0x1d68, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1f92, 0x3ff7, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1f92, 0x3ff7, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1f92, 0x3ff7, 0xffcc, 0x1e70, 0x1e70, 0xffcc, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0xffff, 0xdfff, 0x1fbc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1f92, 0x3ff7, 0xffcc, 0x1e70, 0x1e70, 0xffcc, 0x3ff7, 0x3fbc, 0x9fff, 0xffff, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xbfee, 0xffdd, 0xffdd, 0xffdd, 0xffcc, 0xbfee, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xbfee, 0x3fde, 0x7fe6, 0x7fe6, 0x3fde, 0xbfee, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0xffff, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x7fe6, 0x3fde, 0x3fde, 0x7fe6, 0xffdd, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0xbfee, 0xffff, 0xffff, 0x3ff7, 0x1f92, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x7ff7, 0xffcc, 0xffdd, 0x7ff7, 0xffdd, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0xdfff, 0x1fbc, 0x1fbc, 0xdfff, 0xffdd, 0x1fbc, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffdd, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1fbc, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffdd, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0x1d68, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0x1140, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0x0000, 0x1140, 0x1d68, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xa163, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1f92, 0x3ff7, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1f92, 0x3ff7, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0x1e70, 0xffcc, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0xffff, 0xdfff, 0x1fbc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0x1e70, 0xffcc, 0x3ff7, 0x3fbc, 0x9fff, 0xffff, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0xf7d6, 0xf7d6, 0xffdd, 0xffcc, 0xbfee, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0x18df, 0x39e7, 0x7fe6, 0x3fde, 0xbfee, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0xffff, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x39e7, 0x18df, 0x3fde, 0x7fe6, 0xffdd, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0xbfee, 0xffff, 0xffff, 0x3ff7, 0x1f92, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xbdf7, 0x73c6, 0xffdd, 0x7ff7, 0xffdd, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xffff, 0xf0b5, 0x1fbc, 0xdfff, 0xffdd, 0x1fbc, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffdd, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1fbc, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffdd, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xa163, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0xdef7, 0x6b9d, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1f92, 0x3ff7, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0xe063, 0x73c6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0xffff, 0xdfff, 0x1fbc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0xe063, 0x73c6, 0x9cef, 0x10b6, 0xdef7, 0xffff, 0x9cef, 0xe88c, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0xf7d6, 0xf7d6, 0xf7d6, 0x73c6, 0x5ae7, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0x18df, 0x39e7, 0x39e7, 0x18df, 0x5ae7, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0xffff, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x39e7, 0x18df, 0x18df, 0x39e7, 0xf7d6, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0x1e70, 0x1e70, 0xbfee, 0xffff, 0xffff, 0x3ff7, 0x1f92, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xbdf7, 0x73c6, 0xf7d6, 0xbdf7, 0xf7d6, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xffff, 0xf0b5, 0xf0b5, 0xffff, 0xf7d6, 0xf0b5, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdd, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1fbc, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffdd, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0xdef7, 0x6b9d, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1f92, 0x3ff7, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0xe063, 0x73c6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0x9fff, 0xffff, 0xffff, 0xdfff, 0x1fbc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0xe063, 0x73c6, 0x9cef, 0x10b6, 0xdef7, 0xffff, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0xffa2, 0x9fff, 0xffff, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0xf7d6, 0xf7d6, 0xf7d6, 0x73c6, 0x5ae7, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0x18df, 0x39e7, 0x39e7, 0x18df, 0x5ae7, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0x9fff, 0xffff, 0xffff, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x39e7, 0x18df, 0x18df, 0x39e7, 0xf7d6, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0x5ae7, 0xffff, 0xffff, 0x9cef, 0xe88c, 0x6b9d, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xbdf7, 0x73c6, 0xf7d6, 0xbdf7, 0xf7d6, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0xffdd, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xffff, 0xf0b5, 0xf0b5, 0xffff, 0xf7d6, 0xf0b5, 0xffff, 0xffff, 0xffff, 0xffff, 0xf7d6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0x9fff, 0xffcc, 0x1e70, 0x1e70, 0x1e70, 0x1fbc, 0xdfff, 0xffff, 0xffff, 0xffff, 0xffdd, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0xdef7, 0x6b9d, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x9fff, 0xffa2, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0xe063, 0x73c6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0xffff, 0xffff, 0xffff, 0xf0b5, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0xe063, 0x73c6, 0x9cef, 0x10b6, 0xdef7, 0xffff, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0xffff, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0xf7d6, 0xf7d6, 0xf7d6, 0x73c6, 0x5ae7, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0x18df, 0x39e7, 0x39e7, 0x18df, 0x5ae7, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0xffff, 0xffff, 0xdef7, 0x6b9d, 0xe063, 0xe063, 0xf7d6, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x39e7, 0x18df, 0x18df, 0x39e7, 0xf7d6, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0x5ae7, 0xffff, 0xffff, 0x9cef, 0xe88c, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xbdf7, 0x73c6, 0xf7d6, 0xbdf7, 0xf7d6, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x3ff7, 0x1f92, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xffff, 0xf0b5, 0xf0b5, 0xffff, 0xf7d6, 0xf0b5, 0xffff, 0xffff, 0xffff, 0xffff, 0xf7d6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0xf0b5, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdd, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1140, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x4c6a, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1e70, 0x1d68, 0x1140, 0x0000, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x4752, 0x0000, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4752, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0xdef7, 0x6b9d, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0xdef7, 0x6b9d, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0xe063, 0x73c6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0xffff, 0xffff, 0xffff, 0xf0b5, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe88c, 0x9cef, 0x73c6, 0xe063, 0xe063, 0x73c6, 0x9cef, 0x10b6, 0xdef7, 0xffff, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0xffff, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0xf7d6, 0xf7d6, 0xf7d6, 0x73c6, 0x5ae7, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x5ae7, 0x18df, 0x39e7, 0x39e7, 0x18df, 0x5ae7, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0xffff, 0xffff, 0xdef7, 0x6b9d, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x39e7, 0x18df, 0x18df, 0x39e7, 0xf7d6, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0x5ae7, 0xffff, 0xffff, 0x9cef, 0xe88c, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xbdf7, 0x73c6, 0xf7d6, 0xbdf7, 0xf7d6, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0x9cef, 0xe88c, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xf7d6, 0xffff, 0xf0b5, 0xf0b5, 0xffff, 0xf7d6, 0xf0b5, 0xffff, 0xffff, 0xffff, 0xffff, 0xf7d6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x6b9d, 0xdef7, 0x73c6, 0xe063, 0xe063, 0xe063, 0xf0b5, 0xffff, 0xffff, 0xffff, 0xffff, 0xf7d6, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 
0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 
0x4752, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0x4752, 
0x0000, 0x4752, 0xa163, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xe063, 0xa163, 0x4752, 0x0000
};
