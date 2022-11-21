#include "stusbar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Stusbar w;
    w.show();
    return a.exec();
}
