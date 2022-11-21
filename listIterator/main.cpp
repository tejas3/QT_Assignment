#include "listiterator.h"

#include <QApplication>
#include <QList>
#include <QDebug>
#include <QListIterator>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  //  listIterator w;
   // w.show();

    QList<int> List;

       for(int i = 0; i < 10; i++) List.append(i);

       // The QListIterator constructor takes a QList
       // as argument. After construction, the iterator
       // is located at the very beginning of the list
       // (before the first item)
       QListIterator<int> iter(List);

       qDebug() << "Forward...";
       while(iter.hasNext())
       {
           // The next() function returns the next item
           // in the list and advances the iterator.
           qDebug() << iter.next();
       }

       qDebug() << "Backward...";
       while(iter.hasPrevious())
       {
           // The next() function returns the next item
           // in the list and advances the iterator.
           qDebug() << iter.previous();
       }





    return a.exec();
}
