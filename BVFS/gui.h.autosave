#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QAction>
#include <QDebug>

namespace Ui {
class GUI;
}

class GUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit GUI(QWidget *parent = 0);
    ~GUI();
    void contextMenuEvent(QContextMenuEvent *);

private slots:
    void receiveShow();
    void receiveRoute(QString);
    void receiveFileName(QString);
    void receiveEnterFile(int);
    void receiveFrontName(QString);
//点击事件
    void on_back_clicked();
    void newDirectory();
    void newFile();
    void ADDChange()
    {
        qDebug()<<"XML Item Pressed.";
    }
    void XMLChange()
    {
        qDebug()<<"SHOW Item Pressed.";
    }


    void on_file2_clicked();
    void on_forward_clicked();

    void on_home_customContextMenuRequested(const QPoint &pos);

    void on_home_pressed();

    void on_new_2_clicked();

    void on_edit_clicked();

    void on_delete_2_clicked();

signals:
    void sendEnterFileName(QString);
    void sendReturnAction();
    void sendFileEditAction(QString);
    void sendNewDirectoryAction(QString);
    void sendNewFileAction(QString);
    void sendRenameAction(QString,QString);
    void sendDeleteAction(QString);

private:
    Ui::GUI *ui;
    QAction* Act_Maxsize;
    QAction* Act_Normal;
    QAction* NewDirectory;
    QAction* NewFile;

protected:
    bool eventFilter(QObject *target, QEvent *e);
};

#endif // GUI_H
