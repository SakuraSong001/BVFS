#include "cli.h"
#include "ui_cli.h"

CLI::CLI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CLI)
{
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::black);
    this->setPalette(palette);
    ui->setupUi(this);
}

CLI::~CLI()
{
    delete ui;
}


void CLI::receiveShow()
{
    this->show();
}
