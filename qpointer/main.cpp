#include "qpointers.h"

#include <QApplication>
#include <QPointer>
#include <QDebug>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //qpointers w;
//  w.show();


    QPointer<QLabel> label = new QLabel;
       label->setText("&Status:");
          if (label)
         label->show();


//           QPointer<int> i=new int(23);

//             i.get();
          delete label;
          qDebug()<<"check is deleted or not--"<<label.isNull();

    return a.exec();
}
