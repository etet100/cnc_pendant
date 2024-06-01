#include <Arduino.h>
#include <HardwareSerial.h>
#include <PolledTimeout.h>
#include <SPI.h>
#define I2C
#ifdef I2C
    #include <Wire.h>
    #include "AS5600.h"
    // #include "Touch.h"
#endif
#include "../config.h"
// #include "Adafruit_GFX.h"
// #include "Adafruit_ILI9341.h"
// #include "images.h"
#include "screen.h"
#include "wifi.h"

// #include "fonts/font.h"

#define WIFI 1
#ifdef WIFI
    // #include <ESP8266WiFi.h>
#endif

// const int16_t I2C_MASTER = 0x42;
// const int16_t I2C_SLAVE = 0x08;

// const char *ssid = WIFI_SSID;
// const char *password = WIFI_PASSWORD;

#ifdef WIFI
    // WiFiEventHandler wifiGotIPHandler;
    // WiFiEventHandler wifiConnectedHandler;
    // WiFiClient wifiClient;
#endif

bool isWifiConnected = false;
bool isWifiConnecting = false;
bool isScanningNetworks = false;

#ifdef I2C
    #define SDA_PIN D3
    #define SCL_PIN D4
    AS5600 as5600(&Wire);
    Touch touch(&Wire);
#endif

Screen screen(touch);
WiFiCommmunicator wifiCommmunicator;
// Adafruit_ILI9341 tft = Adafruit_ILI9341(ADAGFX_PIN_CS, ADAGFX_PIN_DC, ADAGFX_PIN_RST);

// void drawImage(uint16_t x, uint16_t y, const uint16_t *image, const uint8_t w, const uint8_t h);

void setup()
{
    setupWatchdog();

    screen.begin();

    // tft.begin();
    // tft.setRotation(2);
    // tft.fillRect(0, 0, 240, 320, ILI9341_BLACK);

    // tft.setAddrWindow(0, 0, 200, 200);

    Serial.begin(115200);
    // SPI.pins(14, 12, 13, 15); // SCK, MISO, MOSI, SS
    // SPI.setHwCs(true);
    // SPI.begin();
    // SPI.setFrequency(5000);
    // pinMode(D1, OUTPUT);
    // pinMode(D2, OUTPUT);
    // digitalWrite(D1, LOW);
    // digitalWrite(D2, LOW);
    // delay(200);
    // digitalWrite(D1, HIGH);
    // digitalWrite(D2, HIGH);
    
    //tests();



    #ifdef WIFI
        // wifiGotIPHandler = WiFi.onStationModeGotIP([](const WiFiEventStationModeGotIP &event) {
        //     Serial.print("Station connected, IP: ");
        //     Serial.println(WiFi.localIP());

        //     isWifiConnected = true;
        //     isWifiConnecting = false;
        // });
        // wifiConnectedHandler = WiFi.onStationModeConnected([](const WiFiEventStationModeConnected &event) {
        //     Serial.println("Connected to WiFi");
        // });
        // WiFi.onStationModeConnected([](const WiFiEventStationModeConnected &event) {
        //     Serial.println("Connected to WiFi");
        // });
    #endif

    //as5600.getAddress();

    #ifdef WIFI
        Wire.begin(SDA_PIN, SCL_PIN); // join i2c bus (address optional for master)
        Wire.setClock(100000);        // 400kHz I2C clock. Comment this line if having compilation difficulties

        // WiFi.mode(WIFI_STA);
        // WiFi.begin(ssid, password);
    #endif

    Serial.println();
    Serial.println();
    Serial.print("Wait for WiFi... ");

    // while (WiFi.status() != WL_CONNECTED)
    // {
    //     delay(500);
    //     Serial.print(".");
    // }

    // Serial.println("WiFi connected");

    #ifdef I2C
        as5600.begin();
        int b = as5600.isConnected();

        touch.begin();

        Serial.print("Connect: ");
        Serial.println(b);
    #endif

    // drawImage(5, 320 - 5 - 50, image_btn1, image_btn1_size[0], image_btn1_size[1]);
    // drawImage(5 + 60, 320 - 5 - 50, image_btn1, image_btn1_size[0], image_btn1_size[1]);
    // drawImage(5 + 120, 320 - 5 - 50, image_btn1, image_btn1_size[0], image_btn1_size[1]);
    // drawImage(5 + 180, 320 - 5 - 50, image_btn1, image_btn1_size[0], image_btn1_size[1]);

    // drawImage(5, 320 - 5 - 50 - 55, image_btn1, image_btn1_size[0], image_btn1_size[1]);
    // drawImage(5 + 60, 320 - 5 - 50 - 55, image_btn1, image_btn1_size[0], image_btn1_size[1]);
    // drawImage(5 + 120, 320 - 5 - 50 - 55, image_btn1, image_btn1_size[0], image_btn1_size[1]);
    // drawImage(5 + 180, 320 - 5 - 50 - 55, image_btn1, image_btn1_size[0], image_btn1_size[1]);
}

void setupWatchdog()
{
    ESP.wdtDisable();
    *((volatile uint32_t*)0x60000900) &= ~(1); // Disable hardware WDT
}

// void drawImage(uint16_t x, uint16_t y, const uint16_t* image, const uint8_t w, const uint8_t h)
// {
//     uint16_t size = w * h * 2;
//     uint16_t* buf = (uint16_t*)malloc(size);
//     memcpy_P(buf, image, size);
//     tft.startWrite();
//     tft.setAddrWindow(x, y, w, h);
//     nbSPI_writeBytes((uint8_t*)buf, size);
//     while (nbSPI_isBusy()) {
//         delayMicroseconds(3);
//     };
//     tft.endWrite();
//     free(buf);
// }

// void drawChar(uint16_t x, uint16_t y, byte char_) {
//     if (char_ < 48 || char_ > 57) {
//         return;
//     }

//     const uint8_t *font_data = font_7seg;
//     font_data += pgm_read_word(&font_7seg_map[char_ - 32]);
//     uint8_t width = pgm_read_byte(font_data++);
//     uint8_t height = pgm_read_byte(font_data++);
//     if (width == 0 || height == 0 || width > 100 || height > 100) {
//         return;
//     }
//     uint16_t decoded_size = width * height * 2;
//     uint16_t *buf = (uint16_t*)malloc(decoded_size);
//     uint16_t *pos = buf;
//     char font_byte = pgm_read_byte(font_data++);
//     while (font_byte) {
//         uint8_t color = font_byte & 0b11;
//         font_byte >>= 2;
//         while (font_byte--) {
//             *pos++ = color == 0 ? ILI9341_BLACK : ILI9341_WHITE;
//         }
//         font_byte = pgm_read_byte(font_data++);
//     }
//     tft.startWrite();
//     tft.setAddrWindow(x, y, width, height);
//     nbSPI_writeBytes((uint8_t*) buf, decoded_size);
//     while (nbSPI_isBusy()) {
//         delayMicroseconds(3);
//     };
//     tft.endWrite();
//     free(buf);
// }

// void drawNumber(uint16_t x, uint16_t y, int number) {
//     char buf[10];
//     sprintf(buf, "%d", number);
//     for (size_t i = 0; i < strlen(buf); i++) {
//         drawChar(x + i * 32, y, buf[i]);
//     }
// }

// void char_() {
//     const uint8_t *font_data = font_7seg;
//     // Serial.println((rand() % 8) + 48 - 32);
//     // Serial.println(pgm_read_word(&font_7seg_map[(rand() % 8) + 48 - 32]));
//     font_data += pgm_read_word(&font_7seg_map[(rand() % 8) + 48 - 32]);
//     uint8_t width = pgm_read_byte(font_data++);
//     uint8_t height = pgm_read_byte(font_data++);
//     if (width == 0 || height == 0 || width > 100 || height > 100) {
//         return;
//     }
//     uint16_t decoded_size = width * height * 2;
//     uint16_t *buf = (uint16_t*)malloc(decoded_size);
//     uint16_t *pos = buf;
//     char font_byte = pgm_read_byte(font_data++);
//     while (font_byte) {
//         uint8_t color = font_byte & 0b11;
//         font_byte >>= 2;
//         while (font_byte--) {
//             *pos++ = color == 0 ? ILI9341_BLACK : ILI9341_WHITE;
//         }
//         font_byte = pgm_read_byte(font_data++);
//     }
//     tft.startWrite();
//     tft.setAddrWindow(rand() % 190, rand() % 290, width, height);
//     nbSPI_writeBytes((uint8_t*) buf, decoded_size);
//     while (nbSPI_isBusy()) {
//         delayMicroseconds(3);
//     };
//     tft.endWrite();
//     free(buf);
// }

void test() {
    //Serial.println("Starting test");

    // char_();
    return;

    // uint16_t *buf = (uint16_t*)malloc(image_test_size[2]);
    // memcpy_P(buf, image_test, image_test_size[2]);
    //         //while (true) {
    //     tft.startWrite();
    //     tft.setAddrWindow(rand() % 130, rand() % 220, image_test_size[0], image_test_size[1]);
    //     // uint16_t color;
    //     // switch (rand() % 4)
    //     // {
    //     //     case 0: color = ILI9341_BLUE; break;
    //     //     case 1: color = ILI9341_GREEN; break;
    //     //     case 2: color = ILI9341_RED; break;
    //     //     default: color = ILI9341_WHITE; break;
    //     // }
    //     // for (int i = 0; i < 50 * 50; i++) {
    //     //     buf[i] = color++;
    //     // }
    //     // switch (rand() % 3) {
    //     //     case 0: tft.writeColor(ILI9341_BLUE, 25); break;
    //     //     case 1: tft.writeColor(ILI9341_GREEN, 25); break;
    //     //     case 2: tft.writeColor(ILI9341_RED, 25); break;
    //     // }
    //     nbSPI_writeBytes((uint8_t*) buf, image_test_size[2]);
    //     while (nbSPI_isBusy()) {
    //         delayMicroseconds(5);
    //     };
    //     tft.endWrite();
    //     //delay(1);
    // //}
    // free(buf);

    //Serial.println("Test done");
}

// uint16_t* image_btn1_() {
//     static uint8_t im = 0;
//     switch (im++ % 3) {
//         case 0: return (uint16_t*)image_btn1;
//         case 1: return (uint16_t*)image_btn2;
//         case 2: return (uint16_t*)image_btn3;
//     }
//     return 0;
// }

void loop()
{
    //Serial.println("Looping");

    delay(5);

    #ifdef WIFI
        // if (!isWifiConnected && !isWifiConnecting && !isScanningNetworks)
        // {
        //     isScanningNetworks = true;
        //     scanNetworks();
        //     return;
        // }
    #endif

    //Serial.println("Testing AS5600");

    static int number = 0;

    // drawNumber(5, 5, number+=5);
    // drawNumber(5, 55, number+=2);
    // drawNumber(5, 105, as5600.getCumulativePosition());

    static uint32_t lastTime = 0;

    if (millis() - lastTime >= 100)
    {
        screen.loop();
        wifiCommmunicator.loop();

        lastTime = millis();
        //Serial.println(as5600.geCumulativePosition());

        // drawImage(5, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
        // drawImage(5 + 60, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
        // drawImage(5 + 120, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
        // drawImage(5 + 180, 320 - 5 - 50, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);

        // drawImage(5, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
        // drawImage(5 + 60, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
        // drawImage(5 + 120, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);
        // drawImage(5 + 180, 320 - 5 - 50 - 55, image_btn1_(), image_btn1_size[0], image_btn1_size[1]);



        // if (WiFi.status() == WL_CONNECTED && !wifiClient.connected()) {
        //     Serial.println("Connecting to 192.168.1.2");
        //     if (wifiClient.connect("192.168.1.2", 5555)) {
        //         Serial.println("Connected");
        //     } else {
        //         Serial.println("Connection failed");
        //     }
        // } else if (wifiClient.connected()) {
        //     //wifiClient.print("Hello, world!");
        //     wifiClient.setTimeout(1);
        //     if (wifiClient.available()) {
        //         String s = wifiClient.readString();
        //         Serial.println(s);
        //     }
        // }
    }

    // put your main code here, to run repeatedly:
    //Serial.println("Hello, world!");
///    delay(100);

    // using periodic = esp8266::polledTimeout::periodicMs;
    // static periodic nextPing(1000);

    // if (nextPing)
    // {
    //     Wire.requestFrom(I2C_SLAVE, 6); // request 6 bytes from slave device #8

    //     while (Wire.available())
    //     {                         // slave may send less than requested
    //         char c = Wire.read(); // receive a byte as character
    //         Serial.print(c);      // print the character
    //     }
    // }
}

#ifdef WIFI
void scanNetworks()
{
    String ssid;
    int32_t rssi;
    uint8_t encryptionType;
    uint8_t *bssid;
    int32_t channel;
    bool hidden;
    int scanResult = WiFi.scanNetworks();
    if (scanResult == 0)
    {
        Serial.println(F("No networks found"));
    }
    else if (scanResult > 0)
    {
        Serial.printf(PSTR("%d networks found:\n"), scanResult);

        // Print unsorted scan results
        for (int8_t i = 0; i < scanResult; i++)
        {
            WiFi.getNetworkInfo(i, ssid, encryptionType, rssi, bssid, channel, hidden);
            Serial.printf(PSTR("  %02d: [CH %02d] [%02X:%02X:%02X:%02X:%02X:%02X] %ddBm %c %c %s\n"), i, channel, bssid[0], bssid[1], bssid[2], bssid[3], bssid[4], bssid[5], rssi, (encryptionType == ENC_TYPE_NONE) ? ' ' : '*', hidden ? 'H' : 'V', ssid.c_str());

            yield();
        }
    }
    else
    {
        Serial.printf(PSTR("WiFi scan error %d"), scanResult);
    }

    isWifiConnecting = true;
}
#endif
