#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QMutex>
#include <QDebug>

// http://blog.debao.me/2013/08/how-to-use-qthread-in-the-right-way-part-1/

class MyThread : public QThread
{
private:
    bool isRunning;
    QMutex m_mutex;
    void run();

public:
    MyThread();

public slots:
    void stop() {
        qDebug() << "Thread: stop callled: " << currentThreadId();
        QMutexLocker locker(&m_mutex);
        isRunning = false;
    }
};

#endif // MYTHREAD_H
