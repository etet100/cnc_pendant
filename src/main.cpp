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
#include "guislice-config.h"
#include "GUIslice.h"
#include "GUIslice_drv.h"

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

#ifdef I2C
    AS5600 as5600(&Wire);
#endif

// Enumerations for pages, elements, fonts, images
enum {E_PG_MAIN};
enum {E_ELEM_BOX};

// Instantiate the GUI
#define MAX_PAGE            1
#define MAX_ELEM_PG_MAIN    1

gslc_tsGui                  m_gui;
gslc_tsDriver               m_drv;
gslc_tsPage                 m_asPage[MAX_PAGE];
gslc_tsElem                 m_asPageElem[MAX_ELEM_PG_MAIN];
gslc_tsElemRef              m_asPageElemRef[MAX_ELEM_PG_MAIN];

static int16_t DebugOut(char ch) { Serial.write(ch); return 0; }

void initGUI()
{
    gslc_tsElemRef *pElemRef = NULL;

    // Initialize debug output
    gslc_InitDebug(&DebugOut);
    // delay(1000);  // NOTE: Some devices require a delay after Serial.begin() before serial port can be used

    // Initialize
    if (!gslc_Init(&m_gui, &m_drv, m_asPage, MAX_PAGE, NULL, 0))
    {
        return;
    }

    gslc_PageAdd(&m_gui, E_PG_MAIN, m_asPageElem, MAX_ELEM_PG_MAIN, m_asPageElemRef, MAX_ELEM_PG_MAIN);

    // Background flat color
    gslc_SetBkgndColor(&m_gui, GSLC_COL_RED);

    // Create page elements
    pElemRef = gslc_ElemCreateBox(&m_gui, E_ELEM_BOX, E_PG_MAIN, (gslc_tsRect){10, 50, 300, 150});
    gslc_ElemSetCol(&m_gui, pElemRef, GSLC_COL_WHITE, GSLC_COL_BLACK, GSLC_COL_BLACK);

    // Start up display on main page
    gslc_SetPageCur(&m_gui, E_PG_MAIN);

    gslc_DrvRotate(&m_gui, 1);
}

void setup()
{
    ESP.wdtDisable();
    *((volatile uint32_t*) 0x60000900) &= ~(1); // Disable hardware WDT

    Serial.begin(115200);
    SPI.pins(14, 12, 13, 15); // SCK, MISO, MOSI, SS
    SPI.setHwCs(true);
    SPI.begin();  	
    SPI.setFrequency(5000);
    pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    delay(200);
    digitalWrite(D1, HIGH);
    digitalWrite(D2, HIGH);
    
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

    initGUI();
    
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

void loop()
{
    gslc_DrawFillCircle(&m_gui, rand() % 200, rand() % 300, 20, GSLC_COL_BLUE);
    gslc_DrawFillCircle(&m_gui, rand() % 200, rand() % 300, 20, GSLC_COL_GREEN);
    gslc_Update(&m_gui);

    delay(100);

    #ifdef WIFI
        if (!isWifiConnected && !isWifiConnecting)
        {
            scanNetworks();
            return;
        }
    #endif

    Serial.println("Testing AS5600");

    static uint32_t lastTime = 0;

    if (millis() - lastTime >= 100)
    {
        lastTime = millis();
        Serial.println(as5600.getCumulativePosition());
    }

    // put your main code here, to run repeatedly:
    //Serial.println("Hello, world!");
    delay(100);

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