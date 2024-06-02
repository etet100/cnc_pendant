#include "basepage.h"

void BasePage::setTFT(Adafruit_ILI9341* tft) {
    this->tft = tft;
}

void BasePage::addTouchZone(TouchZone* zone) {
    TouchZoneListItem* item = new TouchZoneListItem;
    item->touchZone = zone;
    item->next = touchZones;
    touchZones = item;
}

TouchZone* BasePage::touchZoneAtPos(int x, int y) {
    TouchZoneListItem* current = touchZones;
    while (current != nullptr) {
        if (current->touchZone->isTouched(x, y)) {
            return current->touchZone;
        }
        current = current->next;
    }
    return nullptr;
}

void BasePage::processTouch(int x, int y) {
    TouchZone* zone = touchZoneAtPos(x, y);
    if (zone != nullptr) {
        processTouchZone(zone);
    }
}
