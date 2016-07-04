#-------------------------------------------------
#
# Project created by QtCreator 2016-05-26T16:49:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FirstQtWidgetApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    legacyapi.cpp \
    newapi.cpp \
    legacywrapper.cpp \
    mythread.cpp

HEADERS  += mainwindow.h \
    legacyapi.h \
    newapi.h \
    legacywrapper.h \
    mythread.h

FORMS    += mainwindow.ui
