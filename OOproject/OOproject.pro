#-------------------------------------------------
#
# Project created by QtCreator 2013-11-24T13:18:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OOproject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myscene.cpp \
    genline.cpp \
    comline.cpp \
    object.cpp \
    assoline.cpp \
    usecase.cpp \
    group.cpp \
    lineobject.cpp

HEADERS  += mainwindow.h \
    myscene.h \
    genline.h \
    comline.h \
    object.h \
    assoline.h \
    usecase.h \
    group.h \
    lineobject.h

FORMS    += mainwindow.ui

RESOURCES += \
    source.qrc
