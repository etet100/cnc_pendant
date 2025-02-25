#ifndef BCC208A0_079C_42DA_BBE6_2A8025BAE3FF
#define BCC208A0_079C_42DA_BBE6_2A8025BAE3FF

#include "Arduino.h"

class AsyncClient {
    public:
        void connect(char* ip, uint16_t port) {};
        void onConnect(std::function<void(void*, AsyncClient*)> callback) {};
        void onData(std::function<void(void*, AsyncClient*, void*, size_t)> callback) {};
        void onDisconnect(std::function<void(void*, AsyncClient*)> callback) {};
        void onTimeout(std::function<void(void*, AsyncClient*, uint32_t)> callback) {};
        void close() {};
};

#endif /* BCC208A0_079C_42DA_BBE6_2A8025BAE3FF */
