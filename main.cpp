#include "mainwindow.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    qDebug()<<"test start";
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug()<<"test finish";
    return a.exec();
}
