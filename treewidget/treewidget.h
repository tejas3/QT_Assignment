#ifndef TREEWIDGET_H
#define TREEWIDGET_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QBrush>
QT_BEGIN_NAMESPACE
namespace Ui { class treeWidget; }
QT_END_NAMESPACE

class treeWidget : public QMainWindow
{
    Q_OBJECT

public:
    treeWidget(QWidget *parent = nullptr);
    ~treeWidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::treeWidget *ui;

    void addTreeRoot(QString name, QString description);

    void addTreeChild(QTreeWidgetItem *parent, QString name, QString description);

};
#endif // TREEWIDGET_H
