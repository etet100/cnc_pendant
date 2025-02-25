#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include <EventManager.h>

enum class Axis {
    None = -1,
    X = 0,
    Y,
    Z,
};

enum DeviceState {
    DeviceUnknown = 0,
    DeviceIdle = 1,
    DeviceAlarm = 2,
    DeviceRun = 3,
    DeviceHome = 4,
    DeviceHold0 = 5,
    DeviceHold1 = 6,
    DeviceQueue = 7,
    DeviceCheck = 8,
    DeviceDoor0 = 9,
    DeviceDoor1 = 10,
    DeviceDoor2 = 11,
    DeviceDoor3 = 12,
    DeviceJog = 13,
    DeviceSleep = 14
};

#define AXIS_COUNT 3

enum EventType
{
    PowerBtnPressed = 0,
    StateChanged,
    WiFiStateChanged,
};

typedef std::function<void(int)> Callback;

/*
    Global event manager is defined in `main.cpp`. Do not use `extern`
    to avoid multiple definition error.
*/
#ifndef MAIN
    extern EventManager eventManager;
#endif

#endif // GLOBALS_H
