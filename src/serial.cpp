#include "serial.h"

SerialCommunicator::SerialCommunicator() {
}

bool SerialCommunicator::isConnected() {
    return true;
}

void SerialCommunicator::begin() {
}

void SerialCommunicator::loop() {
    // if (Serial.available()) {
    //     Serial.write(Serial.read());
    // }
}
