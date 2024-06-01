#ifndef WIFI_H_
#define WIFI_H_

#include "communicator.h"
#include <ESP8266WiFi.h>

class WiFiCommmunicator : public Communicator {
public:
    WiFiCommmunicator();
    ~WiFiCommmunicator();
    void begin() override;
    void loop() override;
    bool isConnected() override;
    void scanNetworks();
private:
    bool connected;
    bool connecting;
    WiFiEventHandler wifiGotIPHandler;
    WiFiEventHandler wifiConnectedHandler;
    WiFiClient wifiClient;
};

#endif // WIFI_H_
