#include "networksocket.h"

#include <QDebug>

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

void NetworkSocket::showInfo() const {

    qDebug() << "-------------------[ SOCKET ]---------------------";
    qDebug() << " Protocol type . . : " << getProtocolType();
    qDebug() << " ReceiveQ. . . . . : " << getReceiveQ()<< " bytes";
    qDebug() << " SendQ . . . . . . : " << getSendQ() << " bytes";
    qDebug() << " Local Address . . : " << getLocalAddress() << " bytes";
    qDebug() << " Foreign Address . : " << getForeignAddress();
    qDebug() << " State . . . . . . : " << getState();
    qDebug() << " PID . . . . . . . : " << getPID();
    qDebug() << " Program Name. . . : " << getProgramName();
    qDebug() << "--------------------------------------------------";
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

/**--------------------------------- Setter Functions -----------------------------**/

void NetworkSocket::setProtocolType(QString Protocol) {
    mProtocolType = Protocol;
}

void NetworkSocket::setReceiveQ(quint64 ReceiveQ) {
    mReceiveQ = ReceiveQ;
}

void NetworkSocket::setSendQ(quint64 SendQ) {
    mSendQ = SendQ;
}

void NetworkSocket::setLocalAddress(QString LocalAddress) {
    mLocalAddress = LocalAddress;
}

void NetworkSocket::setForeignAddress(QString ForeignAddress) {
    mForeignAddress = ForeignAddress;
}

void NetworkSocket::setState(QString State) {
    mState = State;
}

void NetworkSocket::setPID(quint64 PID) {
    mPID = PID;
}

void NetworkSocket::setProgramName(QString ProgramName) {
    mProgramName = ProgramName;
}

/**--------------------------------------------------------------------------------------**/
