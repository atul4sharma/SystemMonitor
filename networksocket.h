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
     * @param protocolType   - stores the type of protocol
     * @param receiveQ       - stores the bytes in Recive-Q
     * @param sendQ          - stores the bytes in Send-Q
     * @param localAddress   - stores the local address for the socket
     * @param foreignAddress - stores the foreign address for the socket
     * @param state          - stores the state of socket
     * @param pID            - stores the PID of the process using the socket
     * @param programName    - stores the name of the program using the socket
     */
    explicit NetworkSocket(QString  protocolType,
                           quint64  receiveQ,
                           quint64  sendQ,
                           QString  localAddress,
                           QString  foreignAddress,
                           QString  state,
                           quint64  pID,
                           QString  programName);

    QString  getProtocolType() const;
    quint64  getReceiveQ() const;
    quint64  getSendQ() const;
    QString  getLocalAddress() const;
    QString  getForeignAddress() const;
    QString  getState() const;
    quint64  getPID() const;
    QString  getProgramName() const;

    void setProtocolType(QString protocol);
    void setReceiveQ(quint64 receiveQ);
    void setSendQ(quint64 sendQ);
    void setLocalAddress(QString localAddress);
    void setForeignAddress(QString foreignAddress);
    void setState(QString state);
    void setPID(quint64 pID);
    void setProgramName(QString programName);

    void showInfo() const;

};

#endif // NETWORKSOCKET_H
