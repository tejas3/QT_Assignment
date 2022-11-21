#include "stusbar.h"
#include "ui_stusbar.h"

Stusbar::Stusbar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Stusbar)
{
    ui->setupUi(this);

    // create objects for the label and progress bar
        statusLabel = new QLabel(this);
        statusProgressBar = new QProgressBar(this);

        // set text for the label
        statusLabel->setText("Status Label");

        // make progress bar text invisible
        statusProgressBar->setTextVisible(false);

        // add the two controls to the status bar
        ui->statusbar->addPermanentWidget(statusLabel);
        ui->statusbar->addPermanentWidget(statusProgressBar,1);
}

Stusbar::~Stusbar()
{
    delete ui;
}


void Stusbar::on_actionmyfile_triggered()
{
    // showMessage(const QString & message, int timeout = 0)
       ui->statusbar->showMessage("Status");
       statusProgressBar->setValue(71);
}

