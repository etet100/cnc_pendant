#ifndef SCREEN_H_
#define SCREEN_H_

#define MAX_PAGE 1
#define MAX_ELEM_PG_MAIN 1

class Screen {
public:
    Screen();

private:
    // Enumerations for pages, elements, fonts, images
    enum { E_PG_MAIN };

    enum {
        E_ELEM_BOX,
        E_ELEM_BTN_QUIT
    };
    enum {
        E_FONT_BTN,
        MAX_FONT
    }; // Use separate enum for fonts, MAX_FONT at end

    // gslc_tsGui m_gui;
    // gslc_tsDriver m_drv;
    // gslc_tsPage m_asPage[MAX_PAGE];
    // gslc_tsElem m_asPageElem[MAX_ELEM_PG_MAIN];
    // gslc_tsFont m_asFont[MAX_FONT];
    // gslc_tsElemRef m_asPageElemRef[MAX_ELEM_PG_MAIN];
};

#endif // SCREEN_H_
