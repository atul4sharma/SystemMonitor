#ifndef LOGGER_H
#define LOGGER_H

#include "disk.h"
#include "process.h"
#include "networksocket.h"

class Logger
{
public:
    static void printProcessLog(QList<Process> *pList);
    static void printDiskLog(QList<Disk> *dList);
    static void printSocketLog(QList<NetworkSocket> *socketList);
};


//-----------------------------------------
// Convenience/shortcut functions etc
//-----------------------------------------
#define LOG_PROCESS(PTABLE)   Logger::printProcessLog ( PTABLE )
#define LOG_DISK(PTABLE)      Logger::printDiskLog ( PTABLE )
#define LOG_SOCKET(PTABLE)    Logger::printSocketLog( PTABLE);

#endif // LOGGER_H
