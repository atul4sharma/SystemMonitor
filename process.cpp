#include "process.h"

/**
 * @brief Process::Process
 * Data structure to store the required process information
 */
Process::Process()
{

}

/**
 * @brief Process::Process
 * @param ProcessId        PID of process
 * @param ProcessName      Name of process
 * @param CpuUsage         CPU usage by process
 * @param MemoryUsage      Memory usage by process
 * @param User             User that has invoked the process
 */
Process::Process(quint64 ProcessId ,
                 QString ProcessName ,
                 float CpuUsage ,
                 double MemoryUsage ,
                 QString User)

{

    mProcessId   = ProcessId ;
    mProcessName = ProcessName ;
    mCpuUsage    = CpuUsage ;
    mMemoryUsage = MemoryUsage ;
    mUser        = User ;

}

/**
 * @brief Process::showInfo
 * Shows the process details
 */
void Process::showInfo() const{

    qDebug() << "----------------[ PROCESS ]----------------" ;
    qDebug() << "Process No  . . . . . : " << mProcessId ;
    qDebug() << "User . . . . . . . . .: " << mUser ;
    qDebug() << "Process Name . . . . .: " << mProcessName ;
    qDebug() << "Process CPU Usage  . .: " << mCpuUsage << " % ";
    qDebug() << "Process Memory Usage .: " << mMemoryUsage << " KiB ";
    qDebug() << "-------------------------------------------" ;

}

/** ------------------------------ Getter functions ------------------------- **/

/**
 * @brief Process::getProcessId
 * @return mProcessId
 */
quint64 Process::getProcessId() const{
    return this->mProcessId;
}

/**
 * @brief Process::getProcessName
 * @return mProcessName
 */
QString Process::getProcessName() const{
    return this->mProcessName;
}

/**
 * @brief Process::getCpuUsage
 * @return mCpuUsage
 */
float Process::getCpuUsage() const{
    return this->mCpuUsage;
}

/**
 * @brief Process::getMemoryUsage
 * @return mMemoryUsage
 */
double Process::getMemoryUsage() const{
    return this->mMemoryUsage;
}

/**
 * @brief Process::getUser
 * @return mUser
 */
QString Process::getUser() const{
    return this->mUser;
}

/** ------------------------------------------------------------------------------- **/

/** ----------------------------- Setter Functions -------------------------------- **/

/**
 * @brief Process::setProcessId
 * @param val
 * sets mProcessId to val
 */
void Process::setProcessId( quint64 val ){
    this->mProcessId = val ;
}

/**
 * @brief Process::setProcessName
 * @param str
 * sets mProcessName to val
 */
void Process::setProcessName( QString str ){
    this->mProcessName = str ;
}

/**
 * @brief Process::setCpuUsage
 * @param val
 * sets mCpuUsage to val
 */
void Process::setCpuUsage( float val ){
    this->mCpuUsage = val ;
}

/**
 * @brief Process::setMemoryUsage
 * @param val
 * sets mMemoryUsage to val
 */
void Process::setMemoryUsage( double val){
    this->mMemoryUsage = val ;
}

/**
 * @brief Process::setUser
 * @param str
 * sets mUser to str
 */
void Process::setUser( QString str ){
    this->mUser = str ;
}

/** ------------------------------------------------------------------------------- **/
