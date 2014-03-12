#include "dialog.h"
#include "ui_dialog.h"
#include "config.h"
#include <QtCore>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    config(new Config()),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);

    this->setGeometry(config->getGeometry());
    //this->setFixedSize();
    this->setWindowOpacity(1);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowTitle(QString::fromUtf8("时钟"));

    connect(timer, SIGNAL(timeout()), this, SLOT(refresh()));
    timer->start(1000);
}

Dialog::~Dialog()
{
    delete config;
    delete ui;
}

void Dialog::refresh()
{
    QDateTime time = QDateTime::currentDateTime();
    QString strTime = time.toString("yyyy-MM-dd hh:mm:ss");
    ui->lcdNumber->setDigitCount(strTime.length());
    ui->lcdNumber->display(strTime);
    //ui->timeLabel->setAlignment(Qt::AlignCenter);
    //ui->timeLabel->setText(strTime);
}
//void Dialog::mousePressEvent(QMouseEvent *event){
//    this->windowPos = this->pos();
//    this->mousePos = event->globalPos();
//    this->dPos = mousePos - windowPos;
//}
//void Dialog::mouseMoveEvent(QMouseEvent *event){
//    this->move(event->globalPos() - this->dPos);
//}

