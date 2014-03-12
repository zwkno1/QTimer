#-------------------------------------------------
#
# Project created by QtCreator 2014-01-14T14:47:57
#
#-------------------------------------------------
CONFIG   += static
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTimer
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    config.cpp

HEADERS  += dialog.h \
    config.h

FORMS    += dialog.ui

RESOURCES += \
    resource.qrc

OTHER_FILES += \
    icon.rc

RC_FILE = \
    icon.rc
