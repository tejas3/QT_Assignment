#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDir>
#include<QFile>
#include<QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

    ui->comboBox->addItem("QDir");
    ui->comboBox->addItem("QFile");
    ui->comboBox->addItem("Layout");

    ui->listWidget->addItem("QComboBox");
    ui->listWidget->addItem("QListWidget");
    ui->listWidget->addItem("QTreeWidget");
    ui->listWidget->addItem("QStatusBar");
    ui->listWidget->addItem("QMessageBox");



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Messsage Box", "This is a Message box");
    //about, critical, question, warning
}

void MainWindow::on_PBDir_clicked()
{
    QDir dir("C:\\Users\\Samadhan Ivare\\QtQmlProjects\\QtWidgetExamples\\QDirFolder");
    if(dir.exists())
        QMessageBox::warning(this, "", "Dir exists");
    else {
        dir.mkdir("C:\\Users\\Samadhan Ivare\\QtQmlProjects\\QtWidgetExamples\\QDirFolder");
    }
}

void MainWindow::on_PBWrite_clicked()
{
    QFile file("C:\\Users\\Samadhan Ivare\\QtQmlProjects\\QtWidgetExamples\\QFileReadWrite.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
        QMessageBox::warning(this, "Title", "File not open");

    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_PBRead_clicked()
{
    QFile file("C:\\Users\\Samadhan Ivare\\QtQmlProjects\\QtWidgetExamples\\QFileReadWrite.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::warning(this, "Title", "File not open");

    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
}
