#ifndef NETWORKSOCKET_H
#define NETWORKSOCKET_H

#include <QString>

class NetworkSocket
{
    QString  mProtocolType;
    quint64  mReceiveQ;
    quint64  mSendQ;
    QString  mLocalAddress;
    QString  mForeignAddress;
    QString  mState;
    quint64  mPID;
    QString  mProgramName;

public:
    explicit NetworkSocket();

    explicit NetworkSocket(QString  ProtocolType ,
                           quint64  ReceiveQ ,
                           quint64  SendQ ,
                           QString  LocalAddress ,
                           QString  ForeignAddress ,
                           QString  State ,
                           quint64  PID ,
                           QString  ProgramName );

    QString  getProtocolType() const;
    quint64  getReceiveQ() const;
    quint64  getSendQ() const;
    QString  getLocalAddress() const;
    QString  getForeignAddress() const;
    QString  getState() const;
    quint64  getPID() const;
    QString  getProgramName() const;

};

#endif // NETWORKSOCKET_H
