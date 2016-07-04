QT += core \
      dbus
QT -= gui

TARGET = get
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    test.cpp

HEADERS += \
    test.h

