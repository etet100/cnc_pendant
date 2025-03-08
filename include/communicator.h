#ifndef COMMUNICATOR_H_
#define COMMUNICATOR_H_

class Communicator
{
    public:
        Communicator() { };
        virtual bool isConnected() = 0;
        virtual void begin() = 0;
        virtual void loop() = 0;
};

#endif // COMMUNICATOR_H_
