#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mythread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool isRunning;
    MyThread thread;

private slots:
    void on_pushButton_clicked();
    void on_stopButton_clicked();
    void on_startButton_clicked();
};

#endif // MAINWINDOW_H
