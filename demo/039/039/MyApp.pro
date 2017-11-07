# -------------------------------------------------
# Project created by QtCreator 2009-09-19T11:15:12
# -------------------------------------------------
TARGET = MyApp
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    paintwidget.cpp \
    line.cpp \
    shape.cpp \
    rect.cpp \
    ellipse.cpp
HEADERS += mainwindow.h \
    paintwidget.h \
    line.h \
    shape.h \
    rect.h \
    ellipse.h
RESOURCES += res.qrc
QT       +=core gui widgets

FORMS += \
    myclass.ui
