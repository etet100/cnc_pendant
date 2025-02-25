#ifndef LCDWIDGET_H
#define LCDWIDGET_H

#include <QMutex>
#include <QWidget>
#include <QMouseEvent>

class LcdWidget : public QWidget
{
        Q_OBJECT
    public:
        explicit LcdWidget(QWidget* parent = nullptr);
        QImage* image() {
            lock();

            return &m_image;
        }
        void lock();
        void unlock();
        void setBacklight(bool);
        bool touched() {
            return m_isPressed;
        }
        QPoint last() {
            return m_lastPoint;
        }
        
    protected:
        void paintEvent(QPaintEvent* event) override;
        void mousePressEvent(QMouseEvent* event) override;
        void mouseMoveEvent(QMouseEvent* event) override;
        void mouseReleaseEvent(QMouseEvent* event) override;

    private:
        QImage m_image;
        QMutex m_mutex;
        bool m_isPressed = false;
        bool m_backlight = false;
        QPoint m_lastPoint;
};

#endif // LCDWIDGET_H
