QT += core \
      dbus
QT -= gui

TARGET = dbus-test
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    test.cpp \
    adaptor.cpp

HEADERS += \
    test.h \
    adaptor.h

