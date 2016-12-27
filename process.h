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
    QString mUser;

public:
    explicit Process();
    explicit Process(UINT ProcessId,
                     QString ProcessName,
                     float CpuUsage,
                     double MemoryUsage,
                     QString User);
    void showInfo() const;

    UINT    getProcessId();
    QString getProcessName();
    float   getCpuUsage();
    double  getMemoryUsage();
    QString getUser();

    void setProcessId(UINT val);
    void setProcessName( QString str);
    void setCpuUsage( float val);
    void setMemoryUsage( double val );
    void setUser(QString str );

};

#endif // PROCESS_H
