#include <QApplication>
#include<QWidget>
#include<QLineEdit>
#include<QLabel>
#include<QGridLayout>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window=  new QWidget;

    QLabel *lab= new QLabel("name");
    QLineEdit *ledit= new QLineEdit();

    QLabel *lab1= new QLabel("Mo. No.");
    QLineEdit *ledit1= new QLineEdit;

    QLabel *lab3=new QLabel("Adress");
    QLineEdit *ledit3= new QLineEdit;

    QPushButton *pb=new QPushButton("Submit");

    QGridLayout *gl= new QGridLayout;

    gl->addWidget(lab,0,0);
    gl->addWidget(ledit,0,1);
    gl->addWidget(lab1,1,0);
    gl->addWidget(ledit1,1,1);
    gl->addWidget(lab3,2,0);
    gl->addWidget(ledit3,2,1);
    gl->addWidget(pb,3,0,1,0);

    window->setLayout(gl);

    window->show();


    return a.exec();
}
