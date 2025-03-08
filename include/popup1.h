#ifndef BCC1D9FD_365F_40A8_9330_A198097D3DD2
#define BCC1D9FD_365F_40A8_9330_A198097D3DD2

#include "basepage.h"
#include "button.h"

class Popup1 : public BasePage
{
    public:
        Popup1(Screen& tft);

    protected:
        void processTouchZone(TouchZone* zone) override;
        void processButtons(Buttons& buttons) override {};
        void draw_() override;

    private:
        Button* buttons[12];
};

#endif /* BCC1D9FD_365F_40A8_9330_A198097D3DD2 */
