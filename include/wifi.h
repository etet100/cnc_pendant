#ifndef WIFI_H_
#define WIFI_H_

#include "communicator.h"
#include <ESP8266WiFi.h>
#include "ESPAsyncTCP.h"
#include "circularbuffer.h"

enum WiFiCommmunicatorState {
    WIFI_DISCONNECTED,
    WIFI_CONNECTING,
    WIFI_CONNECTED,
    WIFI_IP,
    WIFI_CONNECTING_TO_SERVER,
    WIFI_CONNECTED_TO_SERVER,
};

class WiFiCommmunicator : public Communicator
{
    public:
        WiFiCommmunicator();
        ~WiFiCommmunicator();
        void begin() override;
        void loop() override;
        bool isConnected() override;
        void scanNetworks();
        WiFiCommmunicatorState getState() { return commState; }

    private:
        WiFiCommmunicatorState commState;
        WiFiEventHandler wifiGotIPHandler;
        WiFiEventHandler wifiConnectedHandler;
        AsyncClient client;
        ulong lastMessageTime;
        CircularBuffer<256> buffer;
        void connect();
        void disconnect();
        void updateLastMessageTime();
        void setCommState(WiFiCommmunicatorState state);
};

#endif // WIFI_H_
