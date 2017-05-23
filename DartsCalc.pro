#-------------------------------------------------
#
# Project created by QtCreator 2015-03-15T20:52:51
#
#-------------------------------------------------

QT       += core gui\
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DartsCalc
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        playsounds.cpp \
        update_score.cpp \
        pushbuttons.cpp \
        player_mode.cpp \
        QtGoogleSpeech/qgooglespeech.cpp

HEADERS  += mainwindow.h \
        QtGoogleSpeech/qgooglespeech_global.h \
        QtGoogleSpeech/qgooglespeech.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc

ICON = DartsCalc.icns

INCLUDEPATH += ./sounds
