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
