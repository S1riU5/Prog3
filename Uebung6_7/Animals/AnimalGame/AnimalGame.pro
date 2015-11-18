#-------------------------------------------------
#
# Project created by QtCreator 2015-07-13T18:59:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AnimalGame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wolf.cpp \
    grafikobj.cpp \
    carrot.cpp \
    bird.cpp \
    stone.cpp \
    rabbit.cpp \
    gamefactory.cpp

HEADERS  += mainwindow.h \
    wolf.h \
    grafikobj.h \
    carrot.h \
    bird.h \
    stone.h \
    rabbit.h \
    gamefactory.h

FORMS    += mainwindow.ui
