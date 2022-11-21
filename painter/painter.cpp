#include "painter.h"
#include "ui_painter.h"

painter::painter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::painter)
{
    ui->setupUi(this);
}

painter::~painter()
{
    delete ui;
}

void painter:: paintEvent(QPaintEvent *e)
{
    QPainter paint(this);
     // QPainter MyPainter(this);

    paint.setPen(Qt::blue);
    paint.setFont(QFont("Arial", 80));
    paint.drawText(rect(), Qt::AlignCenter, "DELTA IOT");


//    QPen PointPen(Qt::red);
//    PointPen.setWidth(5);

//    QPen LinePen(Qt::green);
//    LinePen.setWidth(2);

//    QPoint p1;
//    p1.setX(100);
//    p1.setY(100);

//    QPoint p2;
//    p2.setX(300);
//    p2.setY(200);

//    MyPainter.setPen(PointPen);
//    MyPainter.drawPoint(p1);
//    MyPainter.drawPoint(p2);

//    MyPainter.setPen(LinePen);
//    MyPainter.drawLine(p1, p2);

//    QPen LinePen2(Qt::black);
//    LinePen2.setStyle( Qt::DashDotLine );
//    LinePen2.setWidth(3);

//    MyPainter.setPen(LinePen2);
//    MyPainter.drawLine(QPoint(300,100), QPoint(100,200));


}

