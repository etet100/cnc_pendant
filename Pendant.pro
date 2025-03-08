QT = core gui widgets

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        forms/lcdwidget.cpp \
        forms/testwindow.cpp \
        src/app.cpp \
        src/main.cpp \
        .pio/libdeps/nodemcuv2/CRC/src/CRC.cpp \
        .pio/libdeps/nodemcuv2/CRC/src/CRC12.cpp \
        .pio/libdeps/nodemcuv2/CRC/src/CRC16.cpp \
        .pio/libdeps/nodemcuv2/CRC/src/CRC32.cpp \
        .pio/libdeps/nodemcuv2/CRC/src/CRC64.cpp \
        .pio/libdeps/nodemcuv2/CRC/src/CRC8.cpp \
        .pio/libdeps/nodemcuv2/CRC/src/CrcFastReverse.cpp \
        .pio/libdeps/nodemcuv2/CRC/src/FastCRC32.cpp \
        .pio/libdeps/nodemcuv2/arduino-EventManager/EventManager.cpp \
        src/basepage.cpp \
        src/button.cpp \
        src/buttons.cpp \
        src/config.cpp \
        src/drawable.cpp \
        src/drawing.cpp \
        src/events.cpp \
        src/logo.cpp \
        src/mainpage.cpp \
        src/nbSPI.cpp \
        src/popup1.cpp \
        src/screen.cpp \
        src/serial.cpp \
        src/state.cpp \
        src/stateindicator.cpp \
        src/touch.cpp \
        src/touchzone.cpp \
        src/wheel.cpp \
        src/wirelesscommunicator.cpp \
        win32/src/Adafruit_FT6206.cpp \
        win32/src/Adafruit_ILI9341.cpp \
        win32/src/Arduino.cpp \
        win32/src/PCA9536D.cpp \
        win32/src/SPI.cpp \
        win32/src/WiFi.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    .pio/libdeps/nodemcuv2/CRC/src/CRC.h \
    .pio/libdeps/nodemcuv2/CRC/src/CRC12.h \
    .pio/libdeps/nodemcuv2/CRC/src/CRC16.h \
    .pio/libdeps/nodemcuv2/CRC/src/CRC32.h \
    .pio/libdeps/nodemcuv2/CRC/src/CRC64.h \
    .pio/libdeps/nodemcuv2/CRC/src/CRC8.h \
    .pio/libdeps/nodemcuv2/CRC/src/CrcDefines.h \
    .pio/libdeps/nodemcuv2/CRC/src/CrcFastReverse.h \
    .pio/libdeps/nodemcuv2/CRC/src/CrcParameters.h \
    .pio/libdeps/nodemcuv2/CRC/src/FastCRC32.h \
    .pio/libdeps/nodemcuv2/arduino-EventManager/EventManager.h \
    forms/lcdwidget.h \
    forms/testwindow.h \
    include/app.h \
    include/basepage.h \
    include/button.h \
    include/buttons.h \
    include/circularbuffer.h \
    include/colors.h \
    include/communication.h \
    include/communicator.h \
    include/config.h \
    include/controls.h \
    include/drawable.h \
    include/drawing.h \
    include/globals.h \
    include/images.h \
    include/mainpage.h \
    include/nbSPI.h \
    include/popup1.h \
    include/screen.h \
    include/serial.h \
    include/state.h \
    include/stateindicator.h \
    include/touch.h \
    include/touchzone.h \
    include/wheel.h \
    include/wirelesscommunicator.h \
    win32/include/AS5600.h \
    win32/include/Adafruit_FT6206.h \
    win32/include/Arduino.h \
    win32/include/ESP8266WiFi.h \
    win32/include/ESPAsyncTCP.h \
    win32/include/HardwareSerial.h \
    win32/include/I2C_eeprom.h \
    win32/include/PCA9536D.h \
    win32/include/Print.h \
    win32/include/SPI.h \
    win32/include/Wire.h

FORMS += \
    forms/testwindow.ui

INCLUDEPATH += include
INCLUDEPATH += win32/include
INCLUDEPATH += .pio/libdeps/nodemcuv2/arduino-EventManager
INCLUDEPATH += ".pio/libdeps/nodemcuv2/Adafruit ILI9341"
INCLUDEPATH += ".pio/libdeps/nodemcuv2/Adafruit GFX Library"
INCLUDEPATH += ".pio/libdeps/nodemcuv2/Adafruit BusIO"
INCLUDEPATH += .pio/libdeps/nodemcuv2/CRC/src

DEFINES += ARDUINO=10813
DEFINES += WIN32

CONFIG -= debug_and_release
