#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class listWidget; }
QT_END_NAMESPACE

class listWidget : public QMainWindow
{
    Q_OBJECT

public:
    listWidget(QWidget *parent = nullptr);
    ~listWidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::listWidget *ui;
};
#endif // LISTWIDGET_H
