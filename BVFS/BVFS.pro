#-------------------------------------------------
#
# Project created by QtCreator 2017-07-07T21:20:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BVFS
TEMPLATE = app
# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    gui.cpp \
    cli.cpp \
    ini.cpp \
    editor.cpp \
    myhighlighter.cpp \
    codeeditor.cpp

HEADERS  += mainwindow.h \
    directory.h \
    file.h \
    filesystem.h \
    format.h \
    freeblocklink.h \
    help.h \
    login.h \
    register.h \
    run.h \
    stacki.h \
    gui.h \
    cli.h \
    ini.h \
    main.h \
    editor.h \
    myhighlighter.h \
    codeeditor.h \
    typedef.h

FORMS    += mainwindow.ui \
    gui.ui \
    cli.ui \
    ini.ui \
    editor.ui

RESOURCES += \
    picture.qrc

