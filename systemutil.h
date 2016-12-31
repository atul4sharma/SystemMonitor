#ifndef SYSTEMUTIL_H
#define SYSTEMUTIL_H

#include "process.h"
#include "disk.h"
#include "networksocket.h"
#include "defs.h"

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

    QProcess     *mTopProcess;      // Qprocess mTopProcess handle the subprocess 'top'
    QProcess     *mNetstatProcess;  // QProcess mNetstatProcess handle the subprocess 'netstat'
    QString       mProcess;         // The path of subprocess 'top'
    QStringList   mEnv;             // Sets necessary TERM environment variable required for top command
    QStringList   mArguments;       // Arguments list to handle 'top' process properly
    QString       mOutputString;
    QStringList   mOutputList;


public:
    explicit SystemUtil(QObject *parent = 0);
    ~SystemUtil();

    /**
     * @brief getProcessesList
     * @param processList        - contains list of Processes
     * @return exit_status
     *
     * Execute top process to analyze the current system status
     * and populate the processList with Process objects
     */
    int getProcessesList(QList<Process> *processList);

    /**
     * @brief getDiskList
     * @param diskList           - contains list of Disks
     * @return exit_status
     *
     * Analyze the details of disks that are mounted on the system
     * and poplutes the diskList with Disk object
     */
    int getDiskList(QList<Disk> *diskList);

    /**
     * @brief getSocketList
     * @param socketList         - contains list of Sockets
     * @return exit_status
     *
     * Execute netstat process to analyze the current system status
     * and populate the socketList with NetworkSocket objects
     */
    int getSocketList(QList<NetworkSocket> *socketList);

    /**
     * @brief parseProcesses
     * @param processList
     * @return exit_status
     *
     * takes the output of top command, split it and store it in Process data structure
     * appends the process to processList
     */
    int parseProcesses(QList<Process> *processList);

    /**
     * @brief parseSockets
     * @param socketList
     * @return exit_status
     *
     * takes the output of netstat command, split it and store it in NetworkSocket data structure
     * appends the process to socketList
     */
    int parseSockets(QList<NetworkSocket> *socketList);


signals:

public slots:

};

#endif // SYSTEMUTIL_H
