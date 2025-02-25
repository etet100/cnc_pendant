#include "testwindow.h"
#include "ui_testwindow.h"
#include <QPainter>

TestWindow::TestWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::TestWindow)
{
    ui->setupUi(this);

    connect(ui->btnReset, &QPushButton::clicked, [this] {
        emit resetClicked();
    });
}

LcdWidget *TestWindow::getLcdWidget()
{
    return ui->lcd;
}

TestWindow::~TestWindow() {
    delete ui;
}

bool TestWindow::topPressed()
{
    return ui->btnTop->isDown();
}

bool TestWindow::bottomPressed()
{
    return ui->btnBottom->isDown();
}

bool TestWindow::wheelPressed()
{
    return ui->btnWheel->isDown();
}
