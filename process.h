#ifndef PROCESS_H
#define PROCESS_H

#include <QString>
#include <QDebug>

/**
 * @brief The Process class
 * This class acts as data sturcture to store the individual process details
 */
class Process
{
    quint64 mProcessId;
    QString mProcessName;
    float   mCpuUsage;
    double  mMemoryUsage;
    QString mUser;

public:
    /**
     * @brief Process
     * Default constructor
     */
    explicit Process();

    /**
     * @brief Process      Parameterized constructor
     * @param processId    PID of process
     * @param processName  Name of process
     * @param cpuUsage     CPU usage by process
     * @param memoryUsage  Memory usage by process
     * @param user         User that has invoked the process
     */
    explicit Process(quint64 processId,
                     QString processName,
                     float cpuUsage,
                     double memoryUsage,
                     QString user);
    /**
     * @brief showInfo
     * Shows the details of process
     */
    void showInfo() const;

    /**
     * @brief getProcessId
     * @return mProcessId
     */
    quint64 getProcessId() const;

    /**
     * @brief getProcessName
     * @return mProcessName
     */
    QString getProcessName() const;

    /**
     * @brief getCpuUsage
     * @return mCpuUsage
     */
    float   getCpuUsage() const;

    /**
     * @brief getMemoryUsage
     * @return mMemoryUsage
     */
    double  getMemoryUsage() const;

    /**
     * @brief getUser
     * @return mUser
     */
    QString getUser() const;

    void setProcessId(quint64 val);
    void setProcessName( QString str);
    void setCpuUsage( float val);
    void setMemoryUsage( double val );
    void setUser(QString str );

};

#endif // PROCESS_H
