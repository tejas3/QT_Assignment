#include "stringlist.h"

#include <QApplication>
#include <QStringList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 //   stringlist w;
  //  w.show();


    // A QString
    QString str = "A,B,C,D,E,F,G";
    qDebug() << "QString str = " << str;

    QStringList List;
    qDebug() << "split str using ',' as a delimeter";
    List = str.split(",");

    qDebug() << "List = " << List;

    foreach(QString item, List)
        qDebug() << "List items = " << item;

    qDebug() << "Replace one of the List item";

    List.replaceInStrings("C","CCC");
    List.replaceInStrings("A","VIVEK");
    qDebug() << "List = " << List;

    qDebug() << "Join all items in the List";

    QString joinedString = List.join(", ");
    qDebug() << "joined string = " << joinedString;



    return a.exec();
}
