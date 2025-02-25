#include "lcdwidget.h"
#include <QPainter>
#include <QTimer>

LcdWidget::LcdWidget(QWidget* parent)
    : QWidget { parent }, m_image(240, 320, QImage::Format_RGB888)
{
    m_image.fill(Qt::blue);

    QTimer *timer = new QTimer(this);
    timer->setInterval(10);
    timer->start();
    connect(timer, &QTimer::timeout, [this] {
        this->update();
    });
}

void LcdWidget::lock()
{
    m_mutex.lock();
}

void LcdWidget::unlock()
{
    m_mutex.unlock();
}

void LcdWidget::setBacklight(bool val)
{
    lock();
    m_backlight = val;
    unlock();
    update();
}

void LcdWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    lock();
    QPainter painter(this);
    if (m_backlight) {
        painter.drawImage(0, 0, m_image);
    } else {
        painter.fillRect(rect(), Qt::black);
    }
    painter.end();
    unlock();
}

void LcdWidget::mousePressEvent(QMouseEvent *event)
{
    lock();
    m_isPressed = true;
    m_lastPoint = event->pos();
    unlock();

    QWidget::mousePressEvent(event);
}

void LcdWidget::mouseMoveEvent(QMouseEvent *event)
{
    lock();
    m_lastPoint = event->pos();
    unlock();

    QWidget::mouseMoveEvent(event);
}

void LcdWidget::mouseReleaseEvent(QMouseEvent *event)
{
    lock();
    m_isPressed = false;
    m_lastPoint = event->pos();
    unlock();

    QWidget::mouseReleaseEvent(event);
}
