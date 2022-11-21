#include "varrient.h"

#include <QApplication>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QStringList>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  //  varrient w;
 //   w.show();



    qDebug() << "Writing into file...";
        QFile file("C:/he8v3/icon/filevarrient.txt");
        file.open(QIODevice::WriteOnly);
        QDataStream out(&file);                                // we will serialize the data into the file

        QVariant v(123);                                        // The variant now contains an int
        int x = v.toInt();                                         // x = 123
        out << v;                                            // Writes a type tag and an int to out
        qDebug() << v;
        v = QVariant("hello");                          // The variant now contains a QByteArray
        v = QVariant(QObject::tr("hello"));                // The variant now contains a QString
        int y = v.toInt();                               // y = 0 since v cannot be converted to an int
        QString s = v.toString();                      // s = tr("hello")  (see QObject::tr())
        out << v;
        qDebug() << v;
        file.flush();
        file.close();




        qDebug() << "Reading to the file...";
            file.open(QIODevice::ReadOnly);
            QDataStream in(&file);                           // (opening the previously written stream)
            in >> v;                                            // Reads an Int variant
            int z = v.toInt();                                    // z = 123
            qDebug() << v;

            in >> v;

            // just checking the possibility
            // does not guarantee the valid conversion
            if(v.canConvert<QStringList>())
            {
                qDebug() << v.toStringList();
            }

            file.close();




    return a.exec();
}
