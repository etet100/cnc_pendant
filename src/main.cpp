#define MAIN

#ifdef WIN32
#include <QApplication>
#include "forms/testwindow.h"
#include <QThread>
#endif

#include <Arduino.h>
#include <HardwareSerial.h>
#include <Wire.h>
#include "screen.h"
#include "wirelesscommunicator.h"
#include "serial.h"
#include "mainpage.h"
#include "wheel.h"
#include "state.h"
#include "PCA9536D.h"
#include "buttons.h"
#include "I2C_eeprom.h"
#include "images.h"
#include "drawing.h"
#include "globals.h"

#define SDA_PIN D3
#define SCL_PIN D4
#define I2C_CLOCK 400000
#define LCD_BACKLIGHT_PIN 3

EventManager eventManager;
Touch touch(Wire);
Screen screen(touch);
WirelessCommmunicator wirelessCommmunicator;
SerialCommunicator serialCommunicator;
MainPage mainPage(screen.getTFT());
Wheel wheel(Wire);
PCA9536 pca9536d;
Buttons buttons(pca9536d);
I2C_eeprom ee(0x50, I2C_DEVICESIZE_24LC08);

void logo(Screen &screen);
void setupSerial();
void setupTwoWire();
void setupWatchdog();

void setup()
{
    setupSerial();
    setupWatchdog();
    setupTwoWire();

    pca9536d.begin(Wire);
    if (pca9536d.isConnected())
    {
        // pca9536d.pinMode(0, OUTPUT); NC
        pca9536d.pinMode(LCD_BACKLIGHT_PIN, OUTPUT);
        pca9536d.write(LCD_BACKLIGHT_PIN, HIGH);
        Serial.println("PCA9536 connected");
    } else
    {
        Serial.println("PCA9536 not connected");
    }

    delay(100);

    ee.begin();
    if (!ee.isConnected()) {
        Serial.println("ERROR: Can't find eeprom\nstopped...");
        while (1);
    }

    Serial.println("\nTEST: determine size");
    uint32_t size = ee.determineSize(true);
    if (size > 0) {
        Serial.print("SIZE: ");
        Serial.print(size);
        Serial.println(" KB");
    } else if (size == 0) {
        Serial.println("WARNING: Can't determine eeprom size");
    } else {
        Serial.println("ERROR: Can't find eeprom\nstopped...");
        while (1);
    }

    wheel.begin();
    touch.begin();
    screen.begin();

    screen.loop();
    pca9536d.write(LCD_BACKLIGHT_PIN, LOW);

    wirelessCommmunicator.begin();

    #ifdef LOGO
    logo(screen);
    #endif

    screen.setCurrentPage(&mainPage);
    screen.clear();

    eventManager.addListener(EventType::PowerBtnPressed, [](int event, int param) {
        Serial.println("Power off");
        pca9536d.write(LCD_BACKLIGHT_PIN, HIGH);
    });

    // mainPage.onPowerOff([](int) {
    //     Serial.println("Power off");
    //     pca9536d.write(LCD_BACKLIGHT_PIN, HIGH);
    // });
    buttons.onWheelPressed([](int) {
        Serial.println("Power on");
        pca9536d.write(LCD_BACKLIGHT_PIN, LOW);
    });

    //ESP.deepSleep(0);

    buttons.begin();

    Serial.println("Setup done");
}

void setupSerial()
{
    Serial.begin(115200);
}

void setupTwoWire()
{
    Serial.println("Initializing I2C...");

    Wire.begin(SDA_PIN, SCL_PIN);
    Wire.setClock(I2C_CLOCK);
}

void setupWatchdog()
{
    Serial.println("Disabling watchdog...");

    #ifndef WIN32
    ESP.wdtDisable();
    *((volatile uint32_t*)0x60000900) &= ~(1); // Disable hardware WDT
    #endif
}

void loop()
{
    delay(15);

    static uint32_t lastTime = 0;
    if (millis() - lastTime >= 25) {
        wirelessCommmunicator.loop();
        screen.loop();
        buttons.loop();
        if (buttons.isTopPressed()) {
            Serial.println("Top button");
            //state.setPos(Z, 1);
        }
        if (buttons.isBottomPressed()) {
            Serial.println("Bottom button");
            //state.setPos(Z, 2);
        }
        // if (buttons.isWheelPressed()) {
        //     Serial.println("Wheel button");
        //     //state.setPos(Z, 3);
        // }
        // serialCommunicator.loop();
        wheel.loop();
        // state.setPos(Axis::X, wheel.getPosition());
        // state.setPos(Axis::Y, wheel.getSpeed());

        lastTime = millis();
    }

    eventManager.processAllEvents();
}

#ifdef WIN32

class Worker : public QThread
{
        public:
            void run() {
                setup();
                while (!m_stop) {
                    loop();
                }
                exit(0);
            }

            void stop() {
                m_stop = true;
                wait();
                m_stop = false;
            }

            void restart() {
                stop();
                start();
            }

        private:
            bool m_stop = false;
};

LcdWidget *lcd = nullptr;
TestWindow *wnd = nullptr;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TestWindow tw;
    tw.show();

    wnd = &tw;
    lcd = tw.getLcdWidget();

    Worker worker;
    worker.start();

    worker.connect(
        &tw,
        &TestWindow::resetClicked,
        &worker,
        &Worker::restart
    );

    a.exec();

    worker.stop();

    return 0;
}

#endif
