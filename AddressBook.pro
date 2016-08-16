#-------------------------------------------------
#
# Project created by QtCreator 2016-08-16T14:46:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AddressBook
TEMPLATE = app

CONFIG +=c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    addressbookentry.cpp \
    addressbook.cpp \
    addressbookcontroller.cpp

HEADERS  += mainwindow.h \
    addressbookentry.h \
    addressbook.h \
    addressbookcontroller.h

FORMS    += mainwindow.ui
