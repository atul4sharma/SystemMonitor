#include "logger.h"

void Logger::printDiskLog (QList<Disk> *dList){

    for( int  i = 0 ; i < dList->size() ; i++ ){
        dList->at( i ).showInfo();
    }
}

void Logger::printProcessLog (QList<Process> *pList){

    for( int  i = 0 ; i < pList->size() ; i++ ){
        pList->at( i ).showInfo();
    }

}
