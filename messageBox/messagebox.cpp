#include "messagebox.h"
#include "ui_messagebox.h"
#include <QMessageBox>
messageBox::messageBox(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::messageBox)
{
    ui->setupUi(this);
}

messageBox::~messageBox()
{
    delete ui;
}


void messageBox::on_pushButton_clicked()
{
    int ret;


        if(ui->radioButton->isChecked())
        {
            QMessageBox msgBox;
            msgBox.setText("The document has been modified.");
            ret = msgBox.exec();
        }

        // A better
        else if(ui->radioButton_2->isChecked())
        {
            QMessageBox msgBox;
            msgBox.setText("The document has been modified.");
            msgBox.setInformativeText("Do you want to save your changes?");
            msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard |  QMessageBox::Cancel);

            msgBox.setDefaultButton(QMessageBox::Save);
            ret = msgBox.exec();
        }

        // Waring
        // radioButton_3

        else
           {
           ret = QMessageBox::warning(this, tr("My Application"),tr("The document has been modified.\n"  "Do you want to save your changes?"),
                                         QMessageBox::Save |
                                         QMessageBox::Discard |
                                         QMessageBox::Cancel,
                                         QMessageBox::Save);
           }

           switch (ret) {
             case QMessageBox::Save:
                 // Save was clicked
                 break;
             case QMessageBox::Discard:
                 // Don't Save was clicked
                 break;
             case QMessageBox::Cancel:
                 // Cancel was clicked
                 break;
             default:
                 // should never be reached
                 break;
           }
}

