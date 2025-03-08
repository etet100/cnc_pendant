#include "app.h"

App::App(Touch &touch) : touch(touch)
{    
}

void App::loop(Buttons &buttons)
{
    touch.loop();
    if (currentPage == nullptr) {
        return;
    }

    if (touch.isTouched()) {
        TS_Point touchPoint = touch.getPoint();
        Serial.write("Touch: ");
        Serial.print(touchPoint.x);
        Serial.print(", ");
        Serial.println(touchPoint.y);
        currentPage->processTouch(touchPoint.x, touchPoint.y);
    }

    currentPage->processButtons(buttons);
    currentPage->draw();
}

void App::setCurrentPage(BasePage *page)
{
    currentPage = page;
}
