#ifndef WIFI_H_
#define WIFI_H_

#include "communicator.h"
#include <ESP8266WiFi.h>
#include "ESPAsyncTCP.h"

enum WiFiCommmunicatorState {
    WIFI_CONNECTING,
    WIFI_CONNECTED,
    WIFI_IP,
    WIFI_CONNECTING_TO_SERVER,
    WIFI_CONNECTED_TO_SERVER,
    WIFI_DISCONNECTED,
};

class WiFiCommmunicator : public Communicator {
public:
    WiFiCommmunicator();
    ~WiFiCommmunicator();
    void begin() override;
    void loop() override;
    bool isConnected() override;
    void scanNetworks();
    WiFiCommmunicatorState getState() { return state; }
private:
    WiFiCommmunicatorState state;
    WiFiEventHandler wifiGotIPHandler;
    WiFiEventHandler wifiConnectedHandler;
    //WiFiClient wifiClient;
    AsyncClient client;
    void connect();
};

#endif // WIFI_H_
