#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gui.h"
#include "run.h"
#include <iostream>
#include <QMessageBox>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    emit showGUI();
}

void MainWindow::on_commandLinkButton_clicked()
{
    this->hide();
    emit showCLI();
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::receiveLoginInfo(QString name, QString psw)
{
    if(login(name.toStdString(),psw.toStdString()))
    {
        emit sendLoginStatus(true);
        string order;
        string pwd_tmp = "/root/";
        cout<<loginUser.username<<"@";
        string pwd="";
        vector<string>::iterator it;
        for(it = PWD.begin();it!=PWD.end();it++) {
            pwd+="/";
            pwd+=*it;
//            cout<<"/"<<*it;
        }
        emit sendRoute(QString::fromStdString(pwd));
//        cout<<pwd<<endl;
        //cout<<"$ ";
    }else{
        emit sendLoginStatus(false);
    }
//    QMessageBox::information(this, QString::fromLocal8Bit("警告"),psw);

}

void MainWindow::receiveOrder(QString o)
{
    string order;
    order=o.toStdString();
    if(order.find("cat") == 0) {
        string file = "";
        int i=3;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                file+=order[i];
            }
            if(file.size() > 0) {
                emit sendCatReturn(QString::fromStdString(cat(file)));
            }
        }
    } else if(order.find("cd") == 0) {
        string dir = "";
        int i=2;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir+=order[i];
            }
            if(dir.size() > 0) {
                cd(dir);
            }
        }
    } else if(order == "exit") {
        exit(0);
    } else if(order == "format"){
        sudoFormat();
    } else if(order == "help"){
        help();
    } else if(order == "ll") {
        emit sendLsReturn(QString::fromStdString(ll()));
//        ll();
    } else if(order == "login") {
        if(loginUser.username != "/") {
            cout<<"error: you has logined!"<<endl;
        } else {
//                login();
        }
    } else if(order == "logout") {
        strcpy(loginUser.username,"/");
        run();
    } else if(order == "ls") {
//        ls();
        emit sendLsReturn(QString::fromStdString(ls()));
    } else if(order.find("mkdir") == 0) {
        string dir = "";
        int i=5;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir+=order[i];
            }
            if(dir.size() > 0) {
                mkdir(dir);
            }
        }
    } else if(order == "pwd") {
        emit sendPwdReturn(QString::fromStdString(pwd()));
    } else if(order == "register") {
        testAndRegister();
    } else if(order.find("renamef") == 0) {
        string dir1 = "";
        string dir2 = "";
        int i=7;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir1+=order[i];
            }
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir2+=order[i];
                }
                if(dir1.size() > 0&&dir2.size()>0) {
                    renamef(dir1,dir2);
                }
            }
        }
    } else if(order.find("rename") == 0) {
        string dir1 = "";
        string dir2 = "";
        int i=6;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir1+=order[i];
            }
            while(order[i] == ' ' && i<order.size()) {
                i++;
            }
            if(i < order.size()) {
                for(;i<order.size();i++) {
                    if(order[i] == ' ')
                        break;
                    dir2+=order[i];
                }
                if(dir1.size() > 0&&dir2.size()>0) {
                    rename(dir1,dir2);
                }
            }
        }
    } else if(order.find("rmf") == 0) {
        string dir = "";
        int i=3;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                dir+=order[i];
            }
            if(dir.size() > 0) {
                rmf(dir);
            }
        }
    } else if(order.find("touch") == 0) {
        string file = "";
        int i=5;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                file+=order[i];
            }
            if(file.size() > 0) {
                touch(file);
            }
        }
    } else if(order.find("vim") == 0) {
        string file = "";
        int i=3;
        while(order[i] == ' ' && i<order.size()) {
            i++;
        }
        if(i < order.size()) {
            for(;i<order.size();i++) {
                if(order[i] == ' ')
                    break;
                file+=order[i];
            }
            if(file.size() > 0) {
                emit sendVimAction(QString::fromStdString(file));
//                vim(file);
            }
        }
    }

    string pwd_tmp = "/root/";
    cout<<loginUser.username<<"@";
    vector<string>::iterator it;
    string pwd="";
    for(it = PWD.begin();it!=PWD.end();it++) {
        pwd+="/";
        pwd+=*it;
//        cout<<"/"<<*it;
    }
//    cout<<"$ ";
    emit sendRoute(QString::fromStdString(pwd));
}

void MainWindow::receiveVimContent(QString file,QString content)
{
    string f=file.toStdString();
    string c=content.toStdString();
    vim(f,c);
}
