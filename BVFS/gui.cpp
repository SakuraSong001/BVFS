#include "gui.h"
#include "ui_gui.h"

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
    ui->file2->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/file2.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/file21.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/file22.png);}");
    ui->home->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/home.png);}"
                                      "QPushButton:hover{border-image: url(:/new/prefix1/home1.png);}"
                                      "QPushButton:pressed{border-image: url(:/new/prefix1/home2.png);}");
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

