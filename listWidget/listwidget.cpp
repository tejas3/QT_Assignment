#include "listwidget.h"
#include "ui_listwidget.h"

listWidget::listWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::listWidget)
{
    ui->setupUi(this);
    for(int i = 0; i < 10; i++)
      {
          ui->listWidget_2->addItem("Item " + QString::number(i));
      }
}

listWidget::~listWidget()
{
    delete ui;
}

void listWidget::on_pushButton_clicked()
{
    // Get the pointer to the currently selected item.
    QListWidgetItem *item = ui->listWidget_2->currentItem();

    // Set the text color and its background color using the pointer to the item.
   //item->setTextColor(Qt::white);
    //item->setBackgroundColor(Qt::blue);
}

