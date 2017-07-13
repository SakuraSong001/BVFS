/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName(QStringLiteral("Editor"));
        Editor->resize(800, 600);
        centralwidget = new QWidget(Editor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        Editor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Editor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Editor->setMenuBar(menubar);
        statusbar = new QStatusBar(Editor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Editor->setStatusBar(statusbar);

        retranslateUi(Editor);

        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QMainWindow *Editor)
    {
        Editor->setWindowTitle(QApplication::translate("Editor", "MainWindow", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Editor", "\344\277\235\345\255\230\345\271\266\351\200\200\345\207\272", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Editor", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
