#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(400, 250);
    w.setWindowTitle("QtableWidget");
    w.show();
    return a.exec();
}
