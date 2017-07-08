/********************************************************************************
** Form generated from reading UI file 'cli.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLI_H
#define UI_CLI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLI
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CLI)
    {
        if (CLI->objectName().isEmpty())
            CLI->setObjectName(QStringLiteral("CLI"));
        CLI->resize(800, 600);
        menubar = new QMenuBar(CLI);
        menubar->setObjectName(QStringLiteral("menubar"));
        CLI->setMenuBar(menubar);
        centralwidget = new QWidget(CLI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        CLI->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CLI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CLI->setStatusBar(statusbar);

        retranslateUi(CLI);

        QMetaObject::connectSlotsByName(CLI);
    } // setupUi

    void retranslateUi(QMainWindow *CLI)
    {
        CLI->setWindowTitle(QApplication::translate("CLI", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CLI: public Ui_CLI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLI_H
