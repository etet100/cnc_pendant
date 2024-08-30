#ifndef CIRCULARBUFFER_H
#define CIRCULARBUFFER_H

#include <stdint.h>
#include <stddef.h>

template<size_t S>
class CircularBuffer {
    public:
        CircularBuffer() {
        }
        ~CircularBuffer() {
        }
        bool push(uint8_t *data, size_t len) {
            if (free_ < len) {
                return false;
            }
            size_t toEnd = S - head;
            if (toEnd >= len) {
                memcpy(buffer + head, data, len);
                head += len;
            } else {
                memcpy(buffer + head, data, toEnd);
                memcpy(buffer, data + toEnd, len - toEnd);
                head = len - toEnd;
            }
            head = head % S;
            free_ -= len;
            return true;
        }
        void get(uint8_t *output, size_t len) {
            size_t toEnd = S - tail;
            if (toEnd >= len) {
                memcpy(output, buffer + tail, len);
                tail += len;
            } else {
                memcpy(output, buffer + tail, toEnd);
                memcpy(output + toEnd, buffer, len - toEnd);
                tail = len - toEnd;
            }
            tail = tail % S;
            free_ += len;
        }
        void skip(size_t len) {
            tail = (tail + len) % S;
            free_ += len;
        }
        uint8_t operator [] (size_t index) const {
            return buffer[(tail + index) % S];
        }
        size_t free() {
            return free_;
        }
        size_t size() {
            return S - free_;
        }
    private:
        size_t free_ = S;
        size_t head = 0;
        size_t tail = 0;
        uint8_t buffer[S];
};

#endif // CIRCULARBUFFER_H
