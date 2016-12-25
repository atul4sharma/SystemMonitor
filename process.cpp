#include "process.h"

Process::Process(UINT ProcessId,
                 QString ProcessName,
                 float CpuUsage,
                 double MemoryUsage,
                 double SharedMemoryUsage)
{
    mProcessId         = ProcessId ;
    mProcessName       = ProcessName ;
    mCpuUsage          = CpuUsage ;
    mMemoryUsage       = MemoryUsage ;
    mSharedMemoryUsage = SharedMemoryUsage ;

}


void Process::showInfo(){
    qDebug() << "----------------[ PROCESS ]----------------" ;
    qDebug() << "Process No  . . . . . : " << getProcessId () ;
    qDebug() << "Process Name . . . . .: " << getProcessName () ;
    qDebug() << "Process CPU Usage  . .: " << getCpuUsage () ;
    qDebug() << "Process Memory Usage .: " << getMemoryUsage () ;
    qDebug() << "Process Shared Usage .: " << getSharedMemoryUsage () ;
    qDebug() << "-------------------------------------------" ;
}

UINT Process::getProcessId(){
    return this->mProcessId;
}

QString Process::getProcessName(){
    return this->mProcessName;
}

float Process::getCpuUsage(){
    return this->mCpuUsage;
}

double Process::getMemoryUsage(){
    return this->mMemoryUsage;
}

double Process::getSharedMemoryUsage(){
    return this->mSharedMemoryUsage;
}
