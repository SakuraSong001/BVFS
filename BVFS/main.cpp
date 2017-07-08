#include "mainwindow.h"
#include "gui.h"
#include "cli.h"
#include <QApplication>
#include <iostream>
#include "run.h"
#include "login.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    GUI g;
    CLI c;
    w.show();
    QObject::connect(&w,SIGNAL(showGUI()),&g,SLOT(receiveShow()));
    QObject::connect(&w,SIGNAL(showCLI()),&c,SLOT(receiveShow()));
//    run();

    return a.exec();
}
