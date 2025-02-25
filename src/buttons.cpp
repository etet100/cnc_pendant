#include "buttons.h"
#include <Arduino.h>

#define BUTTON_TOP_PIN 2
#define BUTTON_BOTTOM_PIN 1
#define BUTTON_TOP_BIT (1 << BUTTON_TOP_PIN)
#define BUTTON_BOTTOM_BIT (1 << BUTTON_BOTTOM_PIN)
#define BUTTON_WHEEL_PIN D0

Buttons::Buttons(PCA9536& pca9536d)
    : pca9536d(pca9536d) {
}

void Buttons::begin() {
    Serial.println("Initializing buttons...");
    pca9536d.pinMode(BUTTON_TOP_PIN, INPUT);
    pca9536d.pinMode(BUTTON_BOTTOM_PIN, INPUT);
    pinMode(BUTTON_WHEEL_PIN, INPUT);
    Serial.println(" Result: initialized");
}

void Buttons::loop() {
    regs = pca9536d.readReg();
    wheel = digitalRead(BUTTON_WHEEL_PIN) == LOW;
    if (wheel && wheelPressedCallback) {
        wheelPressedCallback(1);
    }
}

bool Buttons::isTopPressed() {
    return (!(regs & BUTTON_TOP_BIT));
}

bool Buttons::isBottomPressed() {
    return (!(regs & BUTTON_BOTTOM_BIT));
}

bool Buttons::isWheelPressed() {
    return wheel;
}

void Buttons::onWheelPressed(Callback callback) {
    this->wheelPressedCallback = callback;
}
