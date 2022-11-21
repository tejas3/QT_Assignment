#ifndef TIMER_H
#define TIMER_H

#include <QMainWindow>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class timer; }
QT_END_NAMESPACE

class timer : public QMainWindow
{
    Q_OBJECT

public:

   // mytimer();
       QTimer *timermy;

    timer(QWidget *parent = nullptr);
    ~timer();
private slots:
    void myfunction();
     void MyTimerSlot();

private:
    Ui::timer *ui;
       QTimer *settimer;
};
#endif // TIMER_H
