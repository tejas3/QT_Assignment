#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtCore>
#include <QtGui>
#include <QTreeWidget>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    void AddRoot(QString name,QString id,QString Company,QString Role );
    void AddChild(QTreeWidgetItem *parent,QString name,QString Description);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
