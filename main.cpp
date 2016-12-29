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
    }

    LOG_PROCESS (processList);


    QList<Disk> *diskList = new QList<Disk>();
    int diskReturnCode = subProcess->getDiskList( diskList );

    if(diskReturnCode == ST_FAILED) {
        qDebug() << ERROR_MESSAGE;
    }

    LOG_DISK (diskList);

    return a.exec();
}
