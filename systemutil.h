#ifndef SYSTEMUTIL_H
#define SYSTEMUTIL_H

#include "process.h"
#include "disk.h"

#include <QObject>
#include <QProcess>
#include <QList>

/**
 * @brief The SystemUtil class
 * This class handles backend of getting data
 */
class SystemUtil : public QObject
{

    Q_OBJECT

    QProcess     *mTopProcess; //qprocess top handle the subprocess 'top'
    QString       mProcess;     //the path of subprocess 'top'
    QStringList   mEnv;         //sets necessary TERM environment variable required for top command
    QStringList   mArguments;   //arguments list to handle 'top' process properly
    QString       mOutputString;
    QStringList   mOutputList;

    /**
     * @brief mProcessList
     * Stores the list of processes
     */
    QList<Process>* mProcessList;

    /**
     * @brief mDiskList
     * Stores the list of disks
     */
    QList<Disk>* mDiskList;

public:
    explicit SystemUtil(QObject *parent = 0);
    ~SystemUtil();

    /**
     * @brief getProcessesList
     * @return list of processes
     */
    QList<Process>* getProcessesList();

    /**
     * @brief getDiskList
     * @return list of disks
     */
    QList<Disk>* getDiskList();

    /**
     * @brief SystemUtil::parseProcesses
     * takes the output of top command, split it and store it in Process data structure
     * appends the process to mProcessList
     */
    void parseProcesses();

    /**
     * @brief analyzeDisk
     * extracts information about mounted disks
     */
    void analyzeDisk();

signals:

public slots:

};

#endif // SYSTEMUTIL_H
