#include "main.h"
#include "mainwindow.h"
#include "gui.h"
#include "cli.h"
#include "ini.h"
#include <QApplication>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    GUI g;
    CLI c;
    iNI i;
    i.setWindowTitle("iNode Structure Table");
    i.show();
    c.setWindowTitle("Leeeeo@LeeeeoLius-MacBook-Pro:~/Code/BVFS");
    w.show();
//    c.show();
    QObject::connect(&w,SIGNAL(showGUI()),&g,SLOT(receiveShow()));
    QObject::connect(&w,SIGNAL(showCLI()),&c,SLOT(receiveShow()));
    QObject::connect(&c,SIGNAL(sendLoginInfo(QString,QString)),&w,SLOT(receiveLoginInfo(QString,QString)));
    QObject::connect(&w,SIGNAL(sendLoginStatus(bool)),&c,SLOT(receiveLoginStatus(bool)));

    QObject::connect(&w,SIGNAL(sendInodeToIni(INode*,MainFileDirectory)),&i,SLOT(receiveInodeData(INode*,MainFileDirectory)));
    QObject::connect(&i,SIGNAL(sendGetInodeDataInfo(bool)),&w,SLOT(receiveSetInodeInfo(bool)));
//    title();

//    run();

    return a.exec();
}
