#include "list.h"

#include <QApplication>
#include <QList>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // list w;
   // w.show();

    QList<int> List;

        for(int i = 0; i < 6; i++)

            List.append(i);

        List.removeOne(4);

        foreach(int n, List)
            qDebug() << n;

    return a.exec();
}
