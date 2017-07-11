#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_commandLinkButton_clicked();

    void on_pushButton_clicked();
    void receiveLoginInfo(QString,QString);
    void receiveOrder(QString);
    void receiveVimContent(QString,QString);

signals:
    void showGUI();
    void showCLI();
    void sendLoginStatus(bool);
    void sendRoute(QString);
    void sendCatReturn(QString);
    void sendLsReturn(QString);
    void sendLlReturn(QString);
    void sendPwdReturn(QString);
    void sendVimAction(QString);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
