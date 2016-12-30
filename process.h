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
     * @param ProcessId    PID of process
     * @param ProcessName  Name of process
     * @param CpuUsage     CPU usage by process
     * @param MemoryUsage  Memory usage by process
     * @param User         User that has invoked the process
     */
    explicit Process(quint64 ProcessId,
                     QString ProcessName,
                     float CpuUsage,
                     double MemoryUsage,
                     QString User);
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

};

#endif // PROCESS_H
