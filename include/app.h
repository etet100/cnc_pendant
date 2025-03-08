#ifndef BD51680D_3F83_4510_B3FA_9BE51E0CEE7E
#define BD51680D_3F83_4510_B3FA_9BE51E0CEE7E

#include "basepage.h"
#include "touch.h"

class App
{
    public:
        App(Touch& touch);
        void loop(Buttons& buttons);
        void setCurrentPage(BasePage* page);
    private:
        Touch& touch;
        BasePage* currentPage = nullptr;
};

#endif /* BD51680D_3F83_4510_B3FA_9BE51E0CEE7E */
