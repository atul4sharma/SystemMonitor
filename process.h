#ifndef PROCESS_H
#define PROCESS_H

typedef unsigned int UINT;

#include <QString>
#include <QDebug>

class Process
{
    UINT    mProcessId;
    QString mProcessName;
    float   mCpuUsage;
    double  mMemoryUsage;
    double  mSharedMemoryUsage;

public:
    Process(UINT ProcessId,
            QString ProcessName,
            float CpuUsage,
            double MemoryUsage,
            double SharedMemoryUsage);
    void showInfo();

    UINT    getProcessId();
    QString getProcessName();
    float   getCpuUsage();
    double  getMemoryUsage();
    double  getSharedMemoryUsage();
};

#endif // PROCESS_H
