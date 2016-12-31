#include <QCoreApplication>

#include "systemutil.h"
#include "logger.h"

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    SystemUtil* subProcess = new SystemUtil();

    QList<Process> *processList = new QList<Process>();
    int processReturnCode = subProcess->getProcessesList( processList );

    if(processReturnCode == ST_FAILED) {
        qDebug() << ERROR_MESSAGE;
    } else {
        qDebug() << "Successfully got Process list . . .";
    }

    //LOG_PROCESS (processList);


    QList<Disk> *diskList = new QList<Disk>();
    int diskReturnCode = subProcess->getDiskList( diskList );

    if(diskReturnCode == ST_FAILED) {
        qDebug() << ERROR_MESSAGE;
    } else {
        qDebug() << "Successfully got Disk list . . .";
    }

    //LOG_DISK (diskList);

    QList<NetworkSocket> *socketList = new QList<NetworkSocket>();
    int networkSocketReturnCode = subProcess->getSocketList(socketList);

    if(networkSocketReturnCode == ST_FAILED) {
        qDebug() << ERROR_MESSAGE;
    } else {
        qDebug() << "Successfully got Socket list . . .";
    }

    //LOG_SOCKET ( socketList);

    return a.exec();
}
