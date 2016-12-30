#include "networksocket.h"

NetworkSocket::NetworkSocket() {}

NetworkSocket::NetworkSocket(QString ProtocolType,
                             quint64 ReceiveQ,
                             quint64 SendQ,
                             QString LocalAddress,
                             QString ForeignAddress,
                             QString State,
                             quint64 PID,
                             QString ProgramName)
{

    mProtocolType    =  ProtocolType;
    mReceiveQ        =  ReceiveQ;
    mSendQ           =  SendQ;
    mLocalAddress    =  LocalAddress;
    mForeignAddress  =  ForeignAddress;
    mState           =  State;
    mPID             =  PID;
    mProgramName     =  ProgramName;
}

/**----------------------------- Getter Functions ----------------------------------------**/
QString  NetworkSocket::getProtocolType() const{
    return this->mProtocolType;
}

quint64  NetworkSocket::getReceiveQ() const{
    return this->mReceiveQ;
}

quint64  NetworkSocket::getSendQ() const{
    return this->mSendQ;
}

QString  NetworkSocket::getLocalAddress() const{
    return this->mLocalAddress;
}

QString  NetworkSocket::getForeignAddress() const{
    return this->mForeignAddress;
}

QString  NetworkSocket::getState() const{
    return this->mState;
}

quint64  NetworkSocket::getPID() const{
    return this->mPID;
}

QString  NetworkSocket::getProgramName() const{
    return this->mProgramName;
}

/**--------------------------------------------------------------------------------------**/
