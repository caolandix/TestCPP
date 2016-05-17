QT += core
QT -= gui

CONFIG += c++11

TARGET = TestCPP
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    uva_prob101.cpp \
    uva_prob100.cpp \
    application.cpp \
    main.cpp \
    cmdpatapplication.cpp

HEADERS += \
    application.h \
    commondefs.h \
    uva_problems.h \
    cmdpatapplication.h
