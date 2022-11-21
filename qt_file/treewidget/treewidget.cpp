#include "treewidget.h"
#include "ui_treewidget.h"

treeWidget::treeWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::treeWidget)
{
    ui->setupUi(this);

    // Set the number of columns in the tree
       ui->treeWidget_2->setColumnCount(3);

       // Add root nodes
       addTreeRoot("A", "Root_first");
       addTreeRoot("B", "Root_second");
      // addTreeRoot("C", "Root_third");
}

treeWidget::~treeWidget()
{
    delete ui;
}

void treeWidget::addTreeRoot(QString name, QString description)
{
    // QTreeWidgetItem(QTreeWidget * parent, int type = Type)
    QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->treeWidget_2);

    // QTreeWidgetItem::setText(int column, const QString & text)
    treeItem->setText(0, name);
    treeItem->setText(1, description);
    addTreeChild(treeItem, name + "A", "Child_first");
    addTreeChild(treeItem, name + "B", "Child_second");
}


void treeWidget::addTreeChild(QTreeWidgetItem *parent,QString name, QString description)
{
    QTreeWidgetItem *treeItem = new QTreeWidgetItem();

    treeItem->setText(0, name);
    treeItem->setText(1, description);

    // QTreeWidgetItem::addChild(QTreeWidgetItem * child)
    parent->addChild(treeItem);
}

void treeWidget::on_pushButton_clicked()
{
    QBrush brush_red(Qt::red);
        ui->treeWidget_2->currentItem()->setBackground(0, brush_red);
        QBrush brush_green(Qt::blue);
        ui->treeWidget_2->currentItem()->setBackground(1, brush_green);
}

