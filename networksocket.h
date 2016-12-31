#ifndef NETWORKSOCKET_H
#define NETWORKSOCKET_H

#include <QString>

/**
 * @brief The NetworkSocket class
 *
 * This class acts as data structure for storing network information of various sockets.
 *
 */
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
    /**
     * @brief NetworkSocket
     * Default constructor
     */
    explicit NetworkSocket();

    /**
     * @brief NetworkSocket
     * @param ProtocolType   - stores the type of protocol
     * @param ReceiveQ       - stores the bytes in Recive-Q
     * @param SendQ          - stores the bytes in Send-Q
     * @param LocalAddress   - stores the local address for the socket
     * @param ForeignAddress - stores the foreign address for the socket
     * @param State          - stores the state of socket
     * @param PID            - stores the PID of the process using the socket
     * @param ProgramName    - stores the name of the program using the socket
     */
    explicit NetworkSocket(QString  ProtocolType,
                           quint64  ReceiveQ,
                           quint64  SendQ,
                           QString  LocalAddress,
                           QString  ForeignAddress,
                           QString  State,
                           quint64  PID,
                           QString  ProgramName);

    QString  getProtocolType() const;
    quint64  getReceiveQ() const;
    quint64  getSendQ() const;
    QString  getLocalAddress() const;
    QString  getForeignAddress() const;
    QString  getState() const;
    quint64  getPID() const;
    QString  getProgramName() const;

    void setProtocolType(QString Protocol);
    void setReceiveQ(quint64 ReceiveQ);
    void setSendQ(quint64 SendQ);
    void setLocalAddress(QString LocalAddress);
    void setForeignAddress(QString ForeignAddress);
    void setState(QString State);
    void setPID(quint64 PID);
    void setProgramName(QString ProgramName);

    void showInfo() const;

};

#endif // NETWORKSOCKET_H
