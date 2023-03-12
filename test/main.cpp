#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    printf("Hey this is a test");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
