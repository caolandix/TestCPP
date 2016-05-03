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
    commandpattern.cpp

HEADERS += \
    uva_prob101.h \
    application.h \
    commandpattern.h
