#include <QCoreApplication>

#include "systemutil.h"

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    SystemUtil* subProcess = new SystemUtil();

    QList<Process> *processList = new QList<Process>();
    int processReturnCode = subProcess->getProcessesList( processList );

    //uncomment this code to see the details of processList
    /*
    for( int  i = 0 ; i < processList->size() ; i++ ){
        processList->at( i ).showInfo();
    }
    */

    QList<Disk> *diskList = new QList<Disk>();
    int diskReturnCode = subProcess->getDiskList( diskList );

    //uncomment this code to see the details of diskList
    /*
    for( int i = 0 ; i < diskList->size() ; i++ ){
        diskList->at( i ).showInfo();
    }
    */


    return a.exec();
}
