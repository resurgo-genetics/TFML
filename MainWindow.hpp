/*********************************************************************
*
*   HEADER NAME:
*       MainWindow.hpp
*
* Copyright 2016 by Tzung-Chien Hsieh.
*
*********************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "FileListWidget.hpp"
#include <QtWidgets>
#include <string>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

//----------------------------------------------------------------
// Functions
//----------------------------------------------------------------
public:
    explicit MainWindow
        (
        QWidget *parent = 0
        );

    ~MainWindow();

//----------------------------------------------------------------
// Slots
//----------------------------------------------------------------
private slots:
    void addFile();

    void delFile();

    void delResultFile();

    void addBedFile();

    void readHtmlFile
        (
        QString fileName
        );

    void handlePeakCallingClicked();

    void handleTepicClicked();

    void readFile
        (
        QString fileName
        );

    void addDirectory();

    void updateLogText
        (
        QString aLog
        );

    void closeTab
        (
        int aIndex
        );

    void analyzeFile();

    void saveLog();

    void handleLogFinished
        (
        QString aMsg
        );

    void handleFinished
        (
        QString aPath
        );

    void addProject();

    void newProject();

    void handleIntegrateClicked();

    void handleDiffLearnClicked();

    void handleRegressionClicked();

    void refreshProject();

    void zoomIn();

    void zoomOut();

//----------------------------------------------------------------
// Functions
//----------------------------------------------------------------
private:
    void createMenuBar();

    void createToolBar();

    void createAnalysisDock();

    void createFileListDock();

    void readJpg
        (
        QString fileName
        );

    void readBed
        (
        QString fileName
        );

//----------------------------------------------------------------
// Variables
//----------------------------------------------------------------
private:
    Ui::MainWindow *mUi;
    FileListWidget *mList;
    FileListWidget *mResultList;
    QDockWidget *mDockLeft;
    QDockWidget *mDockRight;

};

#endif // MAINWINDOW_H
