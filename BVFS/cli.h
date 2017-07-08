#ifndef CLI_H
#define CLI_H

#include <QMainWindow>

namespace Ui {
class CLI;
}

class CLI : public QMainWindow
{
    Q_OBJECT

public:
    explicit CLI(QWidget *parent = 0);
    ~CLI();

private slots:
    void receiveShow();

private:
    Ui::CLI *ui;
};

#endif // CLI_H
