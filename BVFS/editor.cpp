#include "editor.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
}
QString editFileName;

Editor::~Editor()
{
    delete ui;
}

void Editor::showEditorUI(QString n)
{
    emit sendEditDisplayContent(n);
    editFileName=n;
    this->show();
}

void Editor::on_pushButton_clicked()
{
    editFileName.clear();
    emit showDirectories();
    this->close();
}

void Editor::on_pushButton_2_clicked()
{
    QString editContent=ui->plainTextEdit->toPlainText();
    emit sendEditFileNameContent(editFileName,editContent);
    this->close();
}

void Editor::receiveDisplayContent(QString c)
{
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(c);
}
