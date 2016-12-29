#ifndef LOGGER_H
#define LOGGER_H

#include "disk.h"
#include "process.h"

class Logger
{
public:
    static void printProcessLog(QList<Process> *pList);
    static void printDiskLog(QList<Disk> *dList);
};


//-----------------------------------------
// Convenience/shortcut functions etc
//-----------------------------------------
#define LOG_PROCESS(PTABLE)   Logger::printProcessLog ( PTABLE )
#define LOG_DISK(PTABLE)      Logger::printDiskLog ( PTABLE )

#endif // LOGGER_H
