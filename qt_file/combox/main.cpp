#include "combox.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    combox w;
    w.show();
    return a.exec();
}
