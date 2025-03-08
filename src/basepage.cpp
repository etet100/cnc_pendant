#include "basepage.h"
#include "screen.h"

BasePage::BasePage(Screen &tft, uint16_t y, uint16_t height) : Drawable(tft, 0, y, SCREEN_WIDTH, height) {
}

void BasePage::addTouchZone(TouchZone* zone) {
    TouchZoneListItem* item = new TouchZoneListItem;
    item->touchZone = zone;
    item->next = touchZones;
    touchZones = item;
}

TouchZone* BasePage::touchZoneAtPos(uint16_t x, uint16_t y) {
    TouchZoneListItem* current = touchZones;
    while (current != nullptr) {
        if (current->touchZone->isTouched(x, y)) {
            return current->touchZone;
        }
        current = current->next;
    }

    return nullptr;
}

void BasePage::processButtons(Buttons &buttons)
{
}

void BasePage::processTouch(uint16_t x, uint16_t y) {
    TouchZone* zone = touchZoneAtPos(x, y);
    if (zone != nullptr) {
        processTouchZone(zone);
    }
}
