#ifndef COMMUNICATION_H_
#define COMMUNICATION_H_

#include <stdint.h>
#include "state.h"

enum class CommunicationMode: uint8_t {
    NONE = 0,
    SERIAL_,
    WIFI,
};

enum class PacketType: uint8_t {
    STATE = 0,
    WIFI_CONFIG = 1,
    PING = 2,
    MAX,
};

struct __attribute__ ((packed)) Header
{
    uint16_t start; // 0xAA55
    uint8_t size;
    uint8_t type;
};

struct __attribute__ ((packed)) Footer
{
    uint8_t crc;
};

#define COMM_START 0xAA55
#define COMM_START_BYTE_1 0x55
#define COMM_START_BYTE_2 0xAA
#define COMM_HEAD_START_1_POS 0
#define COMM_HEAD_START_2_POS 1
#define COMM_HEAD_SIZE_POS 2
#define COMM_HEAD_TYPE_POS 3

struct __attribute__ ((packed)) StateMessage
{
    Header header;
    float x;
    float y;
    float z;
    uint8_t machineState;
    CommunicationMode mode;
    char selectedAxis;
    Footer footer;
};

struct __attribute__ ((packed)) PingMessage
{
    Header header;
    Footer footer;
};

struct __attribute__ ((packed)) WifiConfigMessage
{
    Header header;
    char ssid[20];
    char password[20];
    char clientIp[16];
    Footer footer;
};

#define COMM_MAX_PACKET_SIZE std::max(std::max(sizeof(StateMessage), sizeof(WifiConfigMessage)), sizeof(PingMessage))

#endif // COMMUNICATION_H_
