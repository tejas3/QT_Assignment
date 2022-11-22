#include <QCoreApplication>
#include <QList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int>l;
    for(int i=0;i<100;i++)
    {
        l.append(i);
    }

    QListIterator<int>iter(l);
    while(iter.hasNext())
    {
        qDebug()<<iter.next();
    }
    return a.exec();
}
