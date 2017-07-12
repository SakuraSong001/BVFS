#include "gui.h"
#include "ui_gui.h"
#include <QMenu>
#include <QCursor>
#include <QDebug>
#include <QMessageBox>
#include <QSignalMapper>

QString fileName[10];
int fileCount;

GUI::GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUI)
{
    ui->setupUi(this);
    //button的三态
    ui->back->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/back.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/back1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/back2.png);}");
    ui->forward->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/forward.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/forward1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/forward2.png);}");
    ui->icon->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/icon.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/icon1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/icon2.png);}");
    ui->list->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/list.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/list1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/list2.png);}");
    ui->new_2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/new.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/new1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/new2.png);}");
    ui->edit->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/edit.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/edit1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/edit2.png);}");
    ui->delete_2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/delete.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/delete1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/delete2.png);}");
    ui->file1->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/file1.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/file11.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/file12.png);}");
//    ui->file2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/file2.png);}"
//                                      "QPushButton:hover{border-image: url(:/new/prefix1/file21.png);}"
//                                      "QPushButton:pressed{border-image: url(:/new/prefix1/file22.png);}");
    ui->home->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/home.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/home1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/home2.png);}");

    Act_Maxsize = new QAction(tr("新建文件"), this);
    Act_Normal = new QAction(tr("删除文件"), this);
    connect(Act_Maxsize, SIGNAL(triggered()), this, SLOT(ADDChange()));
    connect(Act_Normal, SIGNAL(triggered()), this, SLOT(XMLChange()));

}

GUI::~GUI()
{
    delete ui;
}

void GUI::receiveShow()
{
    this->show();
}

//点击事件
void GUI::on_back_clicked()
{
//    this->hide();
}

void GUI::contextMenuEvent(QContextMenuEvent *) //右键菜单项编辑
{
    QCursor cur=this->cursor();
    QMenu *menu=new QMenu(this);
    menu->addAction(Act_Maxsize); //添加菜单项1
    menu->addAction(Act_Normal); //添加菜单项2
    menu->exec(cur.pos()); //关联到光标
}

void GUI::receiveRoute(QString r)
{
    ui->lineEdit->setText(r);
}


void GUI::on_file2_clicked()
{
    QPushButton *pb2=new QPushButton("first");
    pb2->setMinimumHeight(51);
    pb2->setMinimumWidth(71);
    pb2->setMaximumHeight(51);
    pb2->setMaximumWidth(71);
    pb2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/file2.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/file21.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/file22.png);}");
    ui->horizontalLayout_3->addWidget(pb2);
}

void GUI::receiveFileName(QString r)
{
//    QMessageBox::information(this, QString::fromLocal8Bit("警告"),r);
    for(int i=0;i<10;i++){
        fileName[i].clear();
    }
    QStringList list2 = r.split(" ", QString::SkipEmptyParts);
    // list2: [ "a", "b", "c" ]
//    ui->file2->setText(list2[0]);
//    for(int i=0;i<list2.count();i++)
//    {
//        QMessageBox::information(this, QString::fromLocal8Bit("警告"),list2[i]);
//    }
    if(list2.count()>1)
    {
        QSignalMapper *signalMapper = new QSignalMapper(this);
//        fileCount=list2.count();
        for(int i=0;i<list2.count();i++)
        {
            fileName[i]=list2[i];
            QPushButton *pb2=new QPushButton(list2[i]);
            pb2->setMinimumHeight(51);
            pb2->setMinimumWidth(71);
            pb2->setMaximumHeight(51);
            pb2->setMaximumWidth(71);
            pb2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/file2.png);}"
                                              "QPushButton:hover{border-image: url(:/new/prefix1/file21.png);}"
                                              "QPushButton:pressed{border-image: url(:/new/prefix1/file22.png);}");
//            connect()
            signalMapper->setMapping(pb2, i);
//            connect(pb2,SIGNAL(clicked()),this,SLOT(receiveEnterFile()));
            connect(pb2, SIGNAL(clicked()), signalMapper, SLOT(map()));
            ui->horizontalLayout_3->addWidget(pb2);
        }
        connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(receiveEnterFile(int)));
    }
}

void GUI::receiveEnterFile(int i)
{
//    QMessageBox::information(this, QString::fromLocal8Bit("警告"),fileName[i]);
    QLayoutItem *item;
    while((item = ui->horizontalLayout_3->takeAt(0)) != 0){
        //删除widget
        if(item->widget()){
            delete item->widget();
            //item->widget()->deleteLater();
        }
        delete item;
    }
    emit sendEnterFileName(fileName[i]);
}

bool GUI::eventFilter(QObject *target, QEvent *e)
{
    QMessageBox::information(this, QString::fromLocal8Bit("警告"),target->objectName());
//    if(target->objectName())
//    {
//        if(e->type() == QEvent::MouseButtonDblClick) //双击消息
//            QMessageBox::about(this,"x","x");
//    }
    return QMainWindow::eventFilter(target, e);
}
