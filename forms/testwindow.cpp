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
    return ui->btnTop->isChecked();
}

bool TestWindow::bottomPressed()
{
    return ui->btnBottom->isChecked();
}

bool TestWindow::wheelPressed()
{
    return ui->btnWheel->isDown();
}

void TestWindow::limits(uint16_t limits[])
{
    limits[0] = ui->limit0->value();
    limits[1] = ui->limit1->value();
    limits[2] = ui->limit2->value();
    limits[3] = ui->limit3->value();
}
