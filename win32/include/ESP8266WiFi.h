#ifndef CC4705BD_C2F8_4E80_B68C_52F57A021387
#define CC4705BD_C2F8_4E80_B68C_52F57A021387

#include <Arduino.h>

#define WIFI_STA 0
#define ENC_TYPE_NONE 0

class WiFiEventHandler {
    public:
        WiFiEventHandler() {};
        virtual ~WiFiEventHandler() {};
};

class WiFiEventStationModeConnected {
};

class WiFiEventStationModeDisconnected {
};

class WiFiEventStationModeGotIP {
};

class WiFiClass {
    public:
        void begin(const char* ssid, const char* password) {}
        int scanNetworks() { return 0; }
        void getNetworkInfo(int8_t&, String&, uint8_t&, int32_t&, uint8_t*&, int32_t&, bool&) {}
        void mode(int mode) {}
        char* localIP() { return ""; }

        WiFiEventHandler onStationModeConnected(std::function<void(const WiFiEventStationModeConnected &)> handler) {
            return WiFiEventHandler();
        }

        WiFiEventHandler onStationModeDisconnected(std::function<void(const WiFiEventStationModeDisconnected &)> handler) {
            return WiFiEventHandler();
        }

        WiFiEventHandler onStationModeGotIP(std::function<void(const WiFiEventStationModeGotIP &)> handler) {
            return WiFiEventHandler();
        }
};

extern WiFiClass WiFi;

#endif /* CC4705BD_C2F8_4E80_B68C_52F57A021387 */
