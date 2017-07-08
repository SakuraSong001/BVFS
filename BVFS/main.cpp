#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "run.h"
#include "login.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    run();
    w.show();

    return a.exec();
}
