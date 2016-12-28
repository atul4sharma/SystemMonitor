#include <QCoreApplication>

#include "systemutil.h"

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    SystemUtil* subProcess = new SystemUtil();

    QList<Process> *processList = subProcess->getProcessesList();

    //uncomment this code to see the details of processList
    /**
    for( int  i = 0 ; i < processList->size() ; i++ ){
        processList->at( i ).showInfo();
    }
    **/

    QList<Disk>* diskList = subProcess->getDiskList();

    //uncomment this code to see the details of diskList
    /**
    for( int i = 0 ; i < diskList->size() ; i++ ){
        diskList->at( i ).showInfo();
    }
    **/


    return a.exec();
}
