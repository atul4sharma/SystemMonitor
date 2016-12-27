#include "process.h"

Process::Process()
{

}

Process::Process(UINT ProcessId,
                 QString ProcessName,
                 float CpuUsage,
                 double MemoryUsage,
                 QString User)
{
    mProcessId   = ProcessId ;
    mProcessName = ProcessName ;
    mCpuUsage    = CpuUsage ;
    mMemoryUsage = MemoryUsage ;
    mUser        = User ;

}


void Process::showInfo() const{
    qDebug() << "----------------[ PROCESS ]----------------" ;
    qDebug() << "Process No  . . . . . : " << mProcessId ;
    qDebug() << "User . . . . . . . . .: " << mUser ;
    qDebug() << "Process Name . . . . .: " << mProcessName ;
    qDebug() << "Process CPU Usage  . .: " << mCpuUsage << " % ";
    qDebug() << "Process Memory Usage .: " << mMemoryUsage << " KiB ";
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

QString Process::getUser(){
    return this->mUser;
}

void Process::setProcessId( UINT val )
{
    this->mProcessId = val ;
}

void Process::setProcessName( QString str )
{
    this->mProcessName = str ;
}

void Process::setCpuUsage( float val )
{
    this->mCpuUsage = val ;
}

void Process::setMemoryUsage( double val)
{
    this->mMemoryUsage = val ;
}

void Process::setUser( QString str )
{
    this->mUser = str ;
}



