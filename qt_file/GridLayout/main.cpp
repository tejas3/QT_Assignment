#include "grilayout.h"

#include <QApplication>
#include <QGridLayout>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  //  GriLayout w;
   // w.show();
      QGridLayout *gridLayout = new QGridLayout;

    QPushButton *button1=new QPushButton("A");
    QPushButton *buttton2=new QPushButton("B");
     QPushButton *button3=new QPushButton("C");
      QPushButton *button4=new QPushButton("D");
       QPushButton *button5=new QPushButton("F");

      // addWidget(*Widget, row, column, rowspan, colspan)
          // 0th row
          gridLayout->addWidget(button1,0,0,1,1);
          gridLayout->addWidget(buttton2,0,1,1,1);
        gridLayout->addWidget(button3,2,0,1,1);


        // 1st row
        gridLayout->addWidget(button4,1,0,1,1);

        // 2nd row with 2-column span
        gridLayout->addWidget(button5,2,0,1,2);

        // Create a widget
            QWidget *w = new QWidget();

            // Set the grid layout as a main layout
            w->setLayout(gridLayout);

            // Window title
            w->setWindowTitle("Grid Layouts (3x4)");

            // Display
            w->show();


            QObject::connect(button1,SIGNAL(clicked(bool)),&a,SLOT(quit()));
                    //   QObject::connect(button1, SIGNAL(clicked()),&a, SLOT(quit()));

    return a.exec();
}
