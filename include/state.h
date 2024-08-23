#ifndef STATE_H
#define STATE_H

#include <stdint.h>
#include <algorithm>

enum class Axis {
    X = 0,
    Y,
    Z,
};

enum class CommunicationMode {
    NONE = 0,
    SERIAL_,
    WIFI,
};

enum class PacketType: uint8_t {
    STATE = 0,
    MAX,
};

struct __attribute__ ((packed)) HeaderMessage
{
    uint16_t start; // 0xAA55
    uint8_t size;
    uint8_t type;
};

struct __attribute__ ((packed)) StateMessage
{
    HeaderMessage header;
    float x;
    float y;
    float z;
    CommunicationMode mode;
};

#define MAX_PACKET_SIZE std::max(sizeof(StateMessage), sizeof(StateMessage))

class State
{
public:
    State();
    float getPos(Axis axis);
    void setPos(Axis axis, float value);
    void fillStateMessage(StateMessage &msg);
private:
    float pos[3] = {0, 100.12, 2322.315};
    CommunicationMode mode = CommunicationMode::NONE;
};

extern State state;

#endif // STATE_H
