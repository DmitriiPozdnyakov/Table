#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);

    QTableWidget *table = new QTableWidget(10, 10, this);
    hbox->addWidget(table);
}

MainWindow::~MainWindow()
{
}

