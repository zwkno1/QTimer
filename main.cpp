#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setStyle("cleanlooks");
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
