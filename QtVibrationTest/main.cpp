#include "QtVibrationTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtVibrationTest w;
    w.show();
    return a.exec();
}
