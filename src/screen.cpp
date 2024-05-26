#include "screen.h"
#include <HardwareSerial.h>
// #include "guislice-config.h"
// #include "GUIslice.h"
// #include "GUIslice_drv.h"

static int16_t DebugOut(char ch) { Serial.write(ch); return 0; }

// Button callbacks
// - This function gets called when the button is pressed
// bool CbBtnQuit(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY)
// {
//   // Determine what type of event occurred on the button
//   // - In this case we're just looking for the user releasing
//   //   a touch over the button.
//   if (eTouch == GSLC_TOUCH_UP_IN) {
//     // Output a message when the button is pressed
//     Serial.println("Quit button pressed");
//     // Set a variable flag that we can use elsewhere
//   }
//   return true;
// }

Screen::Screen() 
{
//   gslc_tsElemRef *pElemRef = NULL;

//     // Initialize debug output
//     gslc_InitDebug(&DebugOut);
//     // delay(1000);  // NOTE: Some devices require a delay after Serial.begin() before serial port can be used

//     // Initialize
//     if (!gslc_Init(&m_gui, &m_drv, m_asPage, MAX_PAGE, NULL, 0))
//     {
//         return;
//     }

//     // Load Fonts
//     if (!gslc_FontSet(&m_gui, E_FONT_BTN, GSLC_FONTREF_PTR, NULL, 1))
//     {
//         return;
//     }

//     gslc_PageAdd(&m_gui, E_PG_MAIN, m_asPageElem, MAX_ELEM_PG_MAIN, m_asPageElemRef, MAX_ELEM_PG_MAIN);

//     // Background flat color
//     gslc_SetBkgndColor(&m_gui, GSLC_COL_RED);

//     // Create page elements
//     pElemRef = gslc_ElemCreateBox(&m_gui, E_ELEM_BOX, E_PG_MAIN, (gslc_tsRect){10, 50, 300, 150});
//     gslc_ElemSetCol(&m_gui, pElemRef, GSLC_COL_WHITE, GSLC_COL_BLACK, GSLC_COL_BLACK);

//     // Create Quit button with text label
//     pElemRef = gslc_ElemCreateBtnTxt(&m_gui, E_ELEM_BTN_QUIT, E_PG_MAIN,
//                                      (gslc_tsRect){120, 100, 80, 40}, (char *)"Quit", 0, E_FONT_BTN, &CbBtnQuit);

//     // Start up display on main page
//     gslc_SetPageCur(&m_gui, E_PG_MAIN);

//     gslc_DrvRotate(&m_gui, 1);
//     gslc_GuiRotate(&m_gui, 1);
}
