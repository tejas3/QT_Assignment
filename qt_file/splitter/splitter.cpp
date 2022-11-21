#include "splitter.h"
#include "ui_splitter.h"

Splitter::Splitter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Splitter)
{
    ui->setupUi(this);
}

Splitter::~Splitter()
{
    delete ui;
}

