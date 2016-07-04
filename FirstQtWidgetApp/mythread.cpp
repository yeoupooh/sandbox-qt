#include "mythread.h"

MyThread::MyThread()
{
    isRunning = false;
}

void MyThread::run()
{
    isRunning = true;
    qDebug() << "From worker thread: " << currentThreadId();
    int i;
    while(1) {
        qDebug() << "From worker thread: " << currentThreadId() << ":" << i++;
        QMutexLocker locker(&m_mutex);
        if (!isRunning) {
            break;
        }
        msleep(10);
    }
}
