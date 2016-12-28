#ifndef PROCESS_H
#define PROCESS_H

typedef unsigned int UINT;

#include <QString>
#include <QDebug>

/**
 * @brief The Process class
 * This class acts as data sturcture to store the individual process details
 */
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

    UINT    getProcessId() const;
    QString getProcessName() const;
    float   getCpuUsage() const;
    double  getMemoryUsage() const;
    QString getUser() const;

    void setProcessId(UINT val);
    void setProcessName( QString str);
    void setCpuUsage( float val);
    void setMemoryUsage( double val );
    void setUser(QString str );

};

#endif // PROCESS_H
