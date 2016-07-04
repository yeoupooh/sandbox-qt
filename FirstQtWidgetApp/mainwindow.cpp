#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "newapi.h"
#include "legacywrapper.h"
#include <QtCore>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    isRunning = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // legacy global function wrapper
    NewApi * api = new LegacyWrapper;
    qDebug("%d\n", api->add(1, 2));

    qDebug("test");
}

void MainWindow::on_stopButton_clicked()
{
    if (isRunning) {
        emit thread.stop();
        isRunning = false;
    }
}

void MainWindow::on_startButton_clicked()
{
    qDebug() << "From main thread: " << QThread::currentThreadId();
    if (!isRunning) {
        thread.start();
        isRunning = true;
    }
}
