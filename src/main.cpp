#include <Arduino.h>
#include <HardwareSerial.h>
#include <PolledTimeout.h>
#include <SPI.h>
#define I2C
#ifdef I2C
#include <Wire.h>
#include "AS5600.h"
#endif
#include "../config.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"
#include "nbSPI.h"
#include "images.h"
#include "screen.h"

#define SDA_PIN D3
#define SCL_PIN D4
#define WIFI 1
#ifdef WIFI
    #include <ESP8266WiFi.h>
#endif

// const int16_t I2C_MASTER = 0x42;
// const int16_t I2C_SLAVE = 0x08;

const char *ssid = WIFI_SSID;
const char *password = WIFI_PASSWORD;

#ifdef WIFI
    WiFiEventHandler wifiGotIPHandler;
    WiFiEventHandler wifiConnectedHandler;
#endif

bool isWifiConnected = false;
bool isWifiConnecting = false;
bool isScanningNetworks = false;

#ifdef I2C
    AS5600 as5600(&Wire);
#endif

Adafruit_ILI9341 tft = Adafruit_ILI9341(ADAGFX_PIN_CS, ADAGFX_PIN_DC, ADAGFX_PIN_RST);

void tests();

void setup()
{
    ESP.wdtDisable();
    *((volatile uint32_t*) 0x60000900) &= ~(1); // Disable hardware WDT

    tft.begin();

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
        wifiGotIPHandler = WiFi.onStationModeGotIP([](const WiFiEventStationModeGotIP &event) {
            Serial.print("Station connected, IP: ");
            Serial.println(WiFi.localIP());

            isWifiConnected = true;
            isWifiConnecting = false;
        });
        wifiConnectedHandler = WiFi.onStationModeConnected([](const WiFiEventStationModeConnected &event) {
            Serial.println("Connected to WiFi");
        });
    #endif

    //as5600.getAddress();

    #ifdef I2C
        Wire.begin(SDA_PIN, SCL_PIN); // join i2c bus (address optional for master)
        Wire.setClock(100000);        // 400kHz I2C clock. Comment this line if having compilation difficulties
    #endif

    #ifdef WIFI
        WiFi.mode(WIFI_STA);
        WiFi.begin(ssid, password);
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

        Serial.print("Connect: ");
        Serial.println(b);
    #endif
}

void test() {
    //Serial.println("Starting test");

    uint16_t *buf = (uint16_t*)malloc(image_test_size[2]);
    memcpy_P(buf, image_test, image_test_size[2]);
            //while (true) {
        tft.startWrite();
        tft.setAddrWindow(rand() % 130, rand() % 220, image_test_size[0], image_test_size[1]);
        // uint16_t color;
        // switch (rand() % 4)
        // {
        //     case 0: color = ILI9341_BLUE; break;
        //     case 1: color = ILI9341_GREEN; break;
        //     case 2: color = ILI9341_RED; break;
        //     default: color = ILI9341_WHITE; break;
        // }
        // for (int i = 0; i < 50 * 50; i++) {
        //     buf[i] = color++;
        // }
        // switch (rand() % 3) {
        //     case 0: tft.writeColor(ILI9341_BLUE, 25); break;
        //     case 1: tft.writeColor(ILI9341_GREEN, 25); break;
        //     case 2: tft.writeColor(ILI9341_RED, 25); break;
        // }
        nbSPI_writeBytes((uint8_t*) buf, image_test_size[2]);
        while (nbSPI_isBusy()) {
            delayMicroseconds(5);
        };
        tft.endWrite();
        //delay(1);
    //}
    free(buf);

    //Serial.println("Test done");
}

void loop()
{
    //Serial.println("Looping");

    delay(25);

    #ifdef WIFI
        // if (!isWifiConnected && !isWifiConnecting && !isScanningNetworks)
        // {
        //     isScanningNetworks = true;
        //     scanNetworks();
        //     return;
        // }
    #endif

    //Serial.println("Testing AS5600");

    test();

    static uint32_t lastTime = 0;

    if (millis() - lastTime >= 100)
    {
        lastTime = millis();
        Serial.println(as5600.getCumulativePosition());
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
unsigned long testFillScreen() {
  unsigned long start = micros();
  tft.fillScreen(ILI9341_BLACK);
  yield();
  tft.fillScreen(ILI9341_RED);
  yield();
  tft.fillScreen(ILI9341_GREEN);
  yield();
  tft.fillScreen(ILI9341_BLUE);
  yield();
  tft.fillScreen(ILI9341_BLACK);
  yield();
  return micros() - start;
}

unsigned long testText() {
  tft.fillScreen(ILI9341_BLACK);
  unsigned long start = micros();
  tft.setCursor(0, 0);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(1);
  tft.println("Hello World!");
  tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2);
  tft.println(1234.56);
  tft.setTextColor(ILI9341_RED);    tft.setTextSize(3);
  tft.println(0xDEADBEEF, HEX);
  tft.println();
  tft.setTextColor(ILI9341_GREEN);
  tft.setTextSize(5);
  tft.println("Groop");
  tft.setTextSize(2);
  tft.println("I implore thee,");
  tft.setTextSize(1);
  tft.println("my foonting turlingdromes.");
  tft.println("And hooptiously drangle me");
  tft.println("with crinkly bindlewurdles,");
  tft.println("Or I will rend thee");
  tft.println("in the gobberwarts");
  tft.println("with my blurglecruncheon,");
  tft.println("see if I don't!");
  return micros() - start;
}

unsigned long testLines(uint16_t color) {
  unsigned long start, t;
  int           x1, y1, x2, y2,
                w = tft.width(),
                h = tft.height();

  tft.fillScreen(ILI9341_BLACK);
  yield();

  x1 = y1 = 0;
  y2    = h - 1;
  start = micros();
  for(x2=0; x2<w; x2+=6) tft.drawLine(x1, y1, x2, y2, color);
  x2    = w - 1;
  for(y2=0; y2<h; y2+=6) tft.drawLine(x1, y1, x2, y2, color);
  t     = micros() - start; // fillScreen doesn't count against timing

  yield();
  tft.fillScreen(ILI9341_BLACK);
  yield();

  x1    = w - 1;
  y1    = 0;
  y2    = h - 1;
  start = micros();
  for(x2=0; x2<w; x2+=6) tft.drawLine(x1, y1, x2, y2, color);
  x2    = 0;
  for(y2=0; y2<h; y2+=6) tft.drawLine(x1, y1, x2, y2, color);
  t    += micros() - start;

  yield();
  tft.fillScreen(ILI9341_BLACK);
  yield();

  x1    = 0;
  y1    = h - 1;
  y2    = 0;
  start = micros();
  for(x2=0; x2<w; x2+=6) tft.drawLine(x1, y1, x2, y2, color);
  x2    = w - 1;
  for(y2=0; y2<h; y2+=6) tft.drawLine(x1, y1, x2, y2, color);
  t    += micros() - start;

  yield();
  tft.fillScreen(ILI9341_BLACK);
  yield();

  x1    = w - 1;
  y1    = h - 1;
  y2    = 0;
  start = micros();
  for(x2=0; x2<w; x2+=6) tft.drawLine(x1, y1, x2, y2, color);
  x2    = 0;
  for(y2=0; y2<h; y2+=6) tft.drawLine(x1, y1, x2, y2, color);

  yield();
  return micros() - start;
}

unsigned long testFastLines(uint16_t color1, uint16_t color2) {
  unsigned long start;
  int           x, y, w = tft.width(), h = tft.height();

  tft.fillScreen(ILI9341_BLACK);
  start = micros();
  for(y=0; y<h; y+=5) tft.drawFastHLine(0, y, w, color1);
  for(x=0; x<w; x+=5) tft.drawFastVLine(x, 0, h, color2);

  return micros() - start;
}

unsigned long testRects(uint16_t color) {
  unsigned long start;
  int           n, i, i2,
                cx = tft.width()  / 2,
                cy = tft.height() / 2;

  tft.fillScreen(ILI9341_BLACK);
  n     = min(tft.width(), tft.height());
  start = micros();
  for(i=2; i<n; i+=6) {
    i2 = i / 2;
    tft.drawRect(cx-i2, cy-i2, i, i, color);
  }

  return micros() - start;
}

unsigned long testFilledRects(uint16_t color1, uint16_t color2) {
  unsigned long start, t = 0;
  int           n, i, i2,
                cx = tft.width()  / 2 - 1,
                cy = tft.height() / 2 - 1;

  tft.fillScreen(ILI9341_BLACK);
  n = min(tft.width(), tft.height());
  for(i=n; i>0; i-=6) {
    i2    = i / 2;
    start = micros();
    tft.fillRect(cx-i2, cy-i2, i, i, color1);
    t    += micros() - start;
    // Outlines are not included in timing results
    tft.drawRect(cx-i2, cy-i2, i, i, color2);
    yield();
  }

  return t;
}

unsigned long testFilledCircles(uint8_t radius, uint16_t color) {
  unsigned long start;
  int x, y, w = tft.width(), h = tft.height(), r2 = radius * 2;

  tft.fillScreen(ILI9341_BLACK);
  start = micros();
  for(x=radius; x<w; x+=r2) {
    for(y=radius; y<h; y+=r2) {
      tft.fillCircle(x, y, radius, color);
    }
  }

  return micros() - start;
}

unsigned long testCircles(uint8_t radius, uint16_t color) {
  unsigned long start;
  int           x, y, r2 = radius * 2,
                w = tft.width()  + radius,
                h = tft.height() + radius;

  // Screen is not cleared for this one -- this is
  // intentional and does not affect the reported time.
  start = micros();
  for(x=0; x<w; x+=r2) {
    for(y=0; y<h; y+=r2) {
      tft.drawCircle(x, y, radius, color);
    }
  }

  return micros() - start;
}

unsigned long testTriangles() {
  unsigned long start;
  int           n, i, cx = tft.width()  / 2 - 1,
                      cy = tft.height() / 2 - 1;

  tft.fillScreen(ILI9341_BLACK);
  n     = min(cx, cy);
  start = micros();
  for(i=0; i<n; i+=5) {
    tft.drawTriangle(
      cx    , cy - i, // peak
      cx - i, cy + i, // bottom left
      cx + i, cy + i, // bottom right
      tft.color565(i, i, i));
  }

  return micros() - start;
}

unsigned long testFilledTriangles() {
  unsigned long start, t = 0;
  int           i, cx = tft.width()  / 2 - 1,
                   cy = tft.height() / 2 - 1;

  tft.fillScreen(ILI9341_BLACK);
  start = micros();
  for(i=min(cx,cy); i>10; i-=5) {
    start = micros();
    tft.fillTriangle(cx, cy - i, cx - i, cy + i, cx + i, cy + i,
      tft.color565(0, i*10, i*10));
    t += micros() - start;
    tft.drawTriangle(cx, cy - i, cx - i, cy + i, cx + i, cy + i,
      tft.color565(i*10, i*10, 0));
    yield();
  }

  return t;
}

unsigned long testRoundRects() {
  unsigned long start;
  int           w, i, i2,
                cx = tft.width()  / 2 - 1,
                cy = tft.height() / 2 - 1;

  tft.fillScreen(ILI9341_BLACK);
  w     = min(tft.width(), tft.height());
  start = micros();
  for(i=0; i<w; i+=6) {
    i2 = i / 2;
    tft.drawRoundRect(cx-i2, cy-i2, i, i, i/8, tft.color565(i, 0, 0));
  }

  return micros() - start;
}

unsigned long testFilledRoundRects() {
  unsigned long start;
  int           i, i2,
                cx = tft.width()  / 2 - 1,
                cy = tft.height() / 2 - 1;

  tft.fillScreen(ILI9341_BLACK);
  start = micros();
  for(i=min(tft.width(), tft.height()); i>20; i-=6) {
    i2 = i / 2;
    tft.fillRoundRect(cx-i2, cy-i2, i, i, i/8, tft.color565(0, i, 0));
    yield();
  }

  return micros() - start;
}

void tests()
{
 Serial.println(F("Benchmark                Time (microseconds)"));
  delay(10);
  Serial.print(F("Screen fill              "));
  Serial.println(testFillScreen());
  delay(500);

  Serial.print(F("Text                     "));
  Serial.println(testText());
  delay(3000);

  Serial.print(F("Lines                    "));
  Serial.println(testLines(ILI9341_CYAN));
  delay(500);

  Serial.print(F("Horiz/Vert Lines         "));
  Serial.println(testFastLines(ILI9341_RED, ILI9341_BLUE));
  delay(500);

  Serial.print(F("Rectangles (outline)     "));
  Serial.println(testRects(ILI9341_GREEN));
  delay(500);

  Serial.print(F("Rectangles (filled)      "));
  Serial.println(testFilledRects(ILI9341_YELLOW, ILI9341_MAGENTA));
  delay(500);

  Serial.print(F("Circles (filled)         "));
  Serial.println(testFilledCircles(10, ILI9341_MAGENTA));

  Serial.print(F("Circles (outline)        "));
  Serial.println(testCircles(10, ILI9341_WHITE));
  delay(500);

  Serial.print(F("Triangles (outline)      "));
  Serial.println(testTriangles());
  delay(500);

  Serial.print(F("Triangles (filled)       "));
  Serial.println(testFilledTriangles());
  delay(500);

  Serial.print(F("Rounded rects (outline)  "));
  Serial.println(testRoundRects());
  delay(500);

  Serial.print(F("Rounded rects (filled)   "));
  Serial.println(testFilledRoundRects());
  delay(500);
}
