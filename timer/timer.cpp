#include "timer.h"
#include "ui_timer.h"
#include <QDateTime>
#include <QDebug>

timer::timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::timer)
{
    ui->setupUi(this);

    settimer=new QTimer(this);
    connect(settimer,SIGNAL(timeout()),this,SLOT(myfunction()));
    settimer->start(1000);


    // create a timer
    timermy = new QTimer(this);

    // setup signal and slot
    connect(timermy, SIGNAL(timeout()),
          this, SLOT(MyTimerSlot()));

    // msec
    timermy->start(1000);



}

timer::~timer()
{
    delete ui;
}

void timer::myfunction()
{
QTime time=QTime::currentTime();
QString time_text=time.toString("hh : mm : ss ");
if((time.second()%2)==0)
{
    time_text[4]=' ';
    time_text[9]=' ';
}
ui->label_time->setText(time_text);
}


//timer::timer()
//{
//    // create a timer
//    timermy = new QTimer(this);

//    // setup signal and slot
//    connect(timermy, SIGNAL(timeout()),
//          this, SLOT(MyTimerSlot()));

//    // msec
//    timermy->start(1000);
//}

void timer::MyTimerSlot()
{
    qDebug() << "Timer...";
}
