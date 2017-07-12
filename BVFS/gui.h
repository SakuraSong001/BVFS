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
//点击事件
    void on_back_clicked();
    void ADDChange()
    {
        qDebug()<<"XML Item Pressed.";
    }
    void XMLChange()
    {
        qDebug()<<"SHOW Item Pressed.";
    }


    void on_file2_clicked();
signals:
    void sendEnterFileName(QString);

private:
    Ui::GUI *ui;
    QAction* Act_Maxsize;
    QAction* Act_Normal;

protected:
    bool eventFilter(QObject *target, QEvent *e);
};

#endif // GUI_H
