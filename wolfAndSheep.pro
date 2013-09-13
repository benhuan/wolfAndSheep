#-------------------------------------------------
#
# Project created by QtCreator 2013-08-28T15:44:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wolfAndSheep
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    chessMan.cpp \
    game.cpp \
    chessboard.cpp

HEADERS  += mainwindow.h \
    chessMan.h \
    game.h \
    chessboard.h

RESOURCES += \
    image.qrc
