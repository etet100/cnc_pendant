#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QMainWindow>
#include "forms/lcdwidget.h"

namespace Ui {
class TestWindow;
}

class TestWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit TestWindow(QWidget* parent = nullptr);
        LcdWidget* getLcdWidget();
        ~TestWindow();
        bool topPressed();
        bool bottomPressed();
        bool wheelPressed();

    signals:
        void resetClicked();

    private:
        Ui::TestWindow* ui;
};

#endif // TESTWINDOW_H
