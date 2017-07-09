#include "ini.h"
#include "ui_ini.h"

iNI::iNI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::iNI)
{
    ui->setupUi(this);
    /*设置tablewidget等宽*/
    QHeaderView* headerView = ui->tableWidget->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
    /*或者下面的代码*/
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    /*设置tablewidget等宽*/
    headerView = ui->tableWidget_2->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
    /*或者下面的代码*/
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    /*设置tablewidget等宽*/
    headerView = ui->tableWidget_3->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);
    /*或者下面的代码*/
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

iNI::~iNI()
{
    delete ui;
}
