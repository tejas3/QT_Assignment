#include "layoutdialog.h"

#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QObject>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //layoutDialog w;
   // w.show();

    QWidget *window=new QWidget();
    window->setWindowTitle("LAYOUT");
    QPushButton *button1=new QPushButton("close");
     QPushButton *button2=new QPushButton("maximize");
      QPushButton *button3=new QPushButton("minimize");

      QHBoxLayout *h=new QHBoxLayout;
      h->addWidget(button1);
        h->addWidget(button2);
          h->addWidget(button3);

          window->setLayout(h);
          window->show();

   //   Qt::CustomizeWindowHint;
         // Qt::WindowMaximizeButtonHint;
          QObject::connect(button1, SIGNAL(clicked()),&a, SLOT(quit()));
          QObject::connect(button2, SIGNAL(clicked()), &a, SLOT(WindowMaximizeButtonHint()));
          QObject::connect(button3, SIGNAL(clicked()),&a, SLOT(showMinimized()));


    return a.exec();
}
