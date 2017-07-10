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
        cout<<pwd<<endl;
        //cout<<"$ ";
    }else{
        emit sendLoginStatus(false);
    }
//    QMessageBox::information(this, QString::fromLocal8Bit("警告"),psw);

}
void MainWindow::receiveSetInodeInfo(bool flag)
{
    if(flag==true)
    {
       INode  inodeToini[INODENUM];
       INode* inodePoint=inodeToini;

       for (int i = 0; i<INODENUM; i++)
       {

          inodeToini[i].id=inode[i].id;
          inodeToini[i].fileCount=inode[i].fileCount;
          inodeToini[i].size= inode[i].size ;
          inodeToini[i].fileMode=inode[i].fileMode;
          inodeToini[i].userId=inode[i].userId;
           for(int j=0;j<DIRECTORYITEMNUM;j++) {
               inodeToini[i].userRight[j]=inode[i].userRight[j];
           }
           for (int j = 0; j < DISKADDRESSNUM; j++)
           {
               inodeToini[i].diskAddress[j] = inode[i].diskAddress[j];
           }
       }


       MainFileDirectory mfdPoint;
       mfdPoint.sz=MFD.sz;
       for (int i = 0; i < MFD.size(); i++)//mfd
       {
           mfdPoint.item[i].iNode=MFD.item[i].iNode;

           strcpy(mfdPoint.item[i].name,MFD.item[i].name);

           strcpy( mfdPoint.item[i].psw,MFD.item[i].psw);
       }
       emit sendInodeToIni(inodePoint,mfdPoint);
    }
}
