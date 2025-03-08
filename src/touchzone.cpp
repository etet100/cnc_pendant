#include "touchzone.h"

TouchZone::TouchZone(uint16_t x, uint16_t y, uint16_t width, uint16_t height): tzx1(x), tzy1(y), tzx2(x + width), tzy2(y + height) {
}

bool TouchZone::isTouched(uint16_t x, uint16_t y) {
    return x >= this->tzx1 && x <= this->tzx2 && y >= this->tzy1 && y <= this->tzy2;
}
