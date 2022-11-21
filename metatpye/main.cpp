//#include "myclass.h"

#include <QApplication>
#include <QDebug>
#include "myclass.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // myclass w;
  //  w.show();

    myclass mClass;
       mClass.mName = "Debussy";

       // put a class into QVariant
       QVariant v = QVariant::fromValue(&mClass);

       // What's the type?
       // It's MyClass, and it's been registered
       // by adding macro in "myclass.h"

       //myclass vClass = v.value<myclass>();

       //qDebug() << vClass.mName;

    return a.exec();
}
