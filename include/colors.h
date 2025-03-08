#ifndef H_COLORS
#define H_COLORS

#include <stdint.h>
#include "Arduino.h"

static const uint16_t WHITE_ON_BLACK[] PROGMEM = {
    0x0000, 0xaa52, 0x54a5, 0xffff};
static const uint16_t WHITE_ON_BLUE[] PROGMEM = {
    0x1f05, 0xff55, 0xffa6, 0xffff};
static const uint16_t WHITE_ON_ORANGE[] PROGMEM = {
    0x20fd, 0x0afe, 0xf4fe, 0xffff};
static const uint16_t WHITE_ON_LIGHTGRAY[] PROGMEM = {
    0x18c6, 0xbad6, 0x5ce7, 0xffff};
static const uint16_t WHITE_ON_DARKGRAY[] PROGMEM = {
    0xef7b, 0x34a5, 0x99ce, 0xffff};
static const uint16_t WHITE_ON_DARKERGRAY[] PROGMEM = {
    0xe739, 0xef7b, 0xf7bd, 0xffff};
static const uint16_t BLACK_ON_DARKGRAY[] PROGMEM = {
    0xef7b, 0x8a52, 0x4529, 0x0000};
static const uint16_t BLACK_ON_ORANGE[] PROGMEM = {
    0x20fd, 0x60a3, 0xa051, 0x0000};

#endif
