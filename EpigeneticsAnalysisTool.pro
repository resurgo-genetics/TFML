#-------------------------------------------------
#
# Project created by QtCreator 2016-05-29T19:35:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EpigeneticsAnalysisTool
TEMPLATE = app
QT += sql widgets
QT += xml widgets

SOURCES += Main.cpp\
        MainWindow.cpp \
    Dialog.cpp \
    DataManager.cpp \
    FileListWidget.cpp \
    BedFileData.cpp \
    AnalysisManager.cpp \
    PeakCallingDialog.cpp \
    TepicDialog.cpp

HEADERS  += MainWindow.hpp \
    Dialog.hpp \
    DataManager.hpp \
    FileListWidget.hpp \
    BedFileData.hpp \
    AnalysisManager.hpp \
    PeakCallingDialog.hpp \
    TepicDialog.hpp

FORMS    += MainWindow.ui
