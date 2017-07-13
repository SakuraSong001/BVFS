/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QPushButton *delete_2;
    QPushButton *edit;
    QPushButton *new_2;
    QPushButton *forward;
    QPushButton *home;
    QPushButton *icon;
    QPushButton *list;
    QFrame *line;
    QFrame *line_2;
    QLineEdit *lineEdit;
    QFrame *line_3;
    QWidget *gridLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName(QStringLiteral("GUI"));
        GUI->resize(819, 532);
        centralwidget = new QWidget(GUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(10, 10, 31, 23));
        back->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/back.png);\n"
"border-image: url(:/new/prefix1/back1.png);\n"
"border-image: url(:/new/prefix1/back2.png);"));
        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setGeometry(QRect(760, 10, 31, 23));
        delete_2->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/delete.png);\n"
"border-image: url(:/new/prefix1/delete1.png);\n"
"border-image: url(:/new/prefix1/delete2.png);"));
        edit = new QPushButton(centralwidget);
        edit->setObjectName(QStringLiteral("edit"));
        edit->setGeometry(QRect(720, 10, 31, 23));
        edit->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/edit.png);\n"
"border-image: url(:/new/prefix1/edit1.png);\n"
"border-image: url(:/new/prefix1/edit2.png);"));
        new_2 = new QPushButton(centralwidget);
        new_2->setObjectName(QStringLiteral("new_2"));
        new_2->setGeometry(QRect(680, 10, 31, 23));
        new_2->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/new.png);\n"
"border-image: url(:/new/prefix1/new1.png);\n"
"border-image: url(:/new/prefix1/new2.png);"));
        forward = new QPushButton(centralwidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setGeometry(QRect(50, 10, 31, 23));
        forward->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/forward.png);\n"
"border-image: url(:/new/prefix1/forward1.png);\n"
"border-image: url(:/new/prefix1/forward2.png);"));
        home = new QPushButton(centralwidget);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(30, 140, 31, 23));
        home->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/home.png);\n"
"border-image: url(:/new/prefix1/home1.png);\n"
"border-image: url(:/new/prefix1/home2.png);"));
        icon = new QPushButton(centralwidget);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(190, 10, 31, 23));
        icon->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/icon.png);\n"
"border-image: url(:/new/prefix1/icon1.png);\n"
"border-image: url(:/new/prefix1/icon2.png);"));
        list = new QPushButton(centralwidget);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(240, 10, 31, 23));
        list->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/list.png);\n"
"border-image: url(:/new/prefix1/list1.png);\n"
"border-image: url(:/new/prefix1/list2.png);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 40, 831, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(93, 50, 20, 471));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 460, 701, 21));
        lineEdit->setStyleSheet(QStringLiteral("background : (0x00,0xff,0x00,0x00)"));
        lineEdit->setFrame(false);
        lineEdit->setReadOnly(true);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(100, 440, 731, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(110, 60, 701, 381));
        horizontalLayout_3 = new QHBoxLayout(gridLayoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        GUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 819, 22));
        GUI->setMenuBar(menubar);
        statusbar = new QStatusBar(GUI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GUI->setStatusBar(statusbar);

        retranslateUi(GUI);

        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QMainWindow *GUI)
    {
        GUI->setWindowTitle(QApplication::translate("GUI", "MainWindow", Q_NULLPTR));
        back->setText(QString());
        delete_2->setText(QString());
        edit->setText(QString());
        new_2->setText(QString());
        forward->setText(QString());
        home->setText(QString());
        icon->setText(QString());
        list->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
