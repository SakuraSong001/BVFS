#include "cli.h"
#include "ui_cli.h"
#include <iostream>
#include <QKeyEvent>
#include <QTime>
using namespace std;
//QString cliHistory;
int tabCount=1;
QString user;
QString route;
QString cmdTime;
QString front;
int tabIndex=0;

CLI::CLI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CLI)
{
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::lightGray);
    this->setPalette(palette);
//    cliHistory="# Leeeeo @ LeeeeoLius-MacBook-Pro in ~/Code/BVFS on git:master x [14:30:01]\n$";

    ui->setupUi(this);
//    ui->textEdit->append(cliHistory);
//    ui->plainTextEdit->appendHtml(cliHistory+"");
    ui->textEdit->moveCursor(QTextCursor::End);
}

CLI::~CLI()
{
    delete ui;
}


void CLI::receiveShow()
{
    this->show();
}

void CLI::on_lineEdit_returnPressed()
{
    cmdTime=QTime::currentTime().toString("hh:mm:ss");
    ui->textEdit->append(ui->lineEdit->text());
    this->setWindowTitle(user+"@LeeeeoLius-MacBook-Pro:"+route);
    front="# "+user+"@ LeeeeoLius-MacBook-Pro in "+route+"["+cmdTime+"]$";
    ui->lineEdit->setText(front);
    cout<<"enter pressed"<<endl;
}

void CLI::keyPressEvent(QKeyEvent  *event)
{
     if(event->key()==Qt::Key_T)
    {
         cout<<"sdafasdfasfd"<<endl;
         tabCount++;
         QTextEdit *edit=new QTextEdit();
//         QString tabname="Tab"+tabCount;
         ui->tabWidget->addTab(edit,"Tab"+QString::number(tabCount, 10));
         ui->tabWidget->setCurrentIndex(tabCount-1);
         tabIndex=tabCount-1;
         //CLI temp;
         //temp.show();
    }else if(event->key()==Qt::Key_W){
         if(tabIndex==0)
         {
             this->close();
         }else{
             ui->tabWidget->removeTab(tabIndex);
             int tmpCount=tabIndex;
             while(tmpCount<tabCount-1)
             {
                 ui->tabWidget->setTabText(tmpCount,"Tab"+QString::number(tabCount+1, 10));
             }
             tabIndex--;
             tabCount--;
            // ui->tabWidget->setTabText();
             //ui->(Tab+"2")->setObjectName("djfkj");
             ui->tabWidget->setCurrentIndex(tabIndex);
         }
     }else if(event->key()==Qt::Key_1)
     {
         ui->tabWidget->setCurrentIndex(0);
     }else if(event->key()==Qt::Key_2)
     {
         ui->tabWidget->setCurrentIndex(1);
     }else if(event->key()==Qt::Key_3)
     {
         ui->tabWidget->setCurrentIndex(2);
     }else if(event->key()==Qt::Key_4)
     {
         ui->tabWidget->setCurrentIndex(3);
     }else if(event->key()==Qt::Key_5)
     {
         ui->tabWidget->setCurrentIndex(4);
     }
}
