#include "messagebox.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    messageBox w;
    w.show();
    return a.exec();
}
