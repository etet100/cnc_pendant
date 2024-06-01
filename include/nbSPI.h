/*
    Interrupt based SPI writeBytes() function for ESP8266
    -----------------------------------------------------
    Use nbSPI_writeBytes(data, size) instead of SPI.writeBytes(data, size).
    nbSPI_writeBytes() will return almost immediatly and NOT block the CPU
    until all data is sent.

    Sending 80 Bytes via nbSPI_writeBytes blocks the CPU for 10µs (6.6µs + 3.5µs).
    Sending 80 Bytes @ 20MHz via SPI.writeBytes blocks the CPU for 40µs.
    Sending 80 Bytes @ 8MHz via SPI.writeBytes blocks the CPU for 88µs.
*/
#ifndef NBSPI_H_
#define NBSPI_H_

void nbSPI_writeBytes(uint8_t *data, uint16_t size);
boolean nbSPI_isBusy();

#endif // NBSPI_H_
