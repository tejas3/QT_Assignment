#include "combox.h"
#include "ui_combox.h"
//#include <QMessageBox>
combox::combox(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::combox)
{
    ui->setupUi(this);
    // Fill the items of the ComboBox
       for(int i = 0; i < 10; i++)
       {
           ui->comboBox->addItem("item " + QString::number(i));
       }
     //  connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(combox::pushButton_));

}

combox::~combox()
{
    delete ui;
}


void combox::on_pushButton_clicked()
{
    if(ui->comboBox->currentText()=="SELECT")
    {
     QMessageBox::warning(this, "warnig", "selecct item");
    }
    else

        QMessageBox::information(this, "Item Selection", ui->comboBox->currentText());
}

