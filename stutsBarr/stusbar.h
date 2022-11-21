#ifndef STUSBAR_H
#define STUSBAR_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
QT_BEGIN_NAMESPACE
namespace Ui { class Stusbar; }
QT_END_NAMESPACE

class Stusbar : public QMainWindow
{
    Q_OBJECT

public:
    Stusbar(QWidget *parent = nullptr);
    ~Stusbar();

private slots:
    void on_actionmyfile_triggered();

private:
    Ui::Stusbar *ui;


    // add references to Label and ProgressBar
    QLabel *statusLabel;
    QProgressBar *statusProgressBar;
};
#endif // STUSBAR_H
