#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>

namespace Ui {
class Editor;
}

class Editor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = 0);
    ~Editor();

private slots:
    void showEditorUI(QString);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void receiveDisplayContent(QString);


signals:
    void sendEditFileNameContent(QString,QString);
    void sendEditDisplayContent(QString);
    void showDirectories();

private:
    Ui::Editor *ui;
};

#endif // EDITOR_H
