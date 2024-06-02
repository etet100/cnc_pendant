#ifndef SERIAL_H_
#define SERIAL_H_

#include "communicator.h"

class SerialCommunicator : public Communicator {
public:
    SerialCommunicator();
    bool isConnected();
    void begin();
    void loop();
};

#endif // SERIAL_H_
