#include "timer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    timer w;
    w.show();
    timer timermy;


    return a.exec();
}
