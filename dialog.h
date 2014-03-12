#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
//class QMouseEvent;
class Config;
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
//protected:
//    QPoint windowPos,mousePos,dPos;
//    void mousePressEvent(QMouseEvent *event);
//    void mouseMoveEvent(QMouseEvent *event);

public slots:
    void refresh();
private:
    Config *config;
    Ui::Dialog *ui;
};

#endif // DIALOG_H
