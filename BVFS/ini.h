#ifndef INI_H
#define INI_H

#include <QMainWindow>

namespace Ui {
class iNI;
}

class iNI : public QMainWindow
{
    Q_OBJECT

public:
    explicit iNI(QWidget *parent = 0);
    ~iNI();

private:
    Ui::iNI *ui;
};

#endif // INI_H
