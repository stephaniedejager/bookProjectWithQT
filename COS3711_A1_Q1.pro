#-------------------------------------------------
#
# Project created by QtCreator 2021-05-20T11:00:16
#
#-------------------------------------------------

QT       += core gui
QT       += core
QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = COS3711_A1_Q1
TEMPLATE = app


SOURCES += main.cpp\
        bookinput.cpp \
    book.cpp \
    bookwriter.cpp

HEADERS  += bookinput.h \
    book.h \
    bookwriter.h

FORMS    += bookinput.ui
