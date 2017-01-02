#include "disk.h"

#include <QDebug>

/**
 * @brief Disk::Disk
 * Default constructor
 */
Disk::Disk() {}


/**
 * @brief Disk::Disk     Parametrized constructor
 * @param name           - Stores display name of disk
 * @param rootPath       - Stores root path of disk
 * @param availableBytes - Stores available bytes of disk for user
 * @param totalBytes     - Stores total bytes of disk
 * @param fileSystemType - Stores file system type
 * @param device         - Stores device name
 */
Disk::Disk(QString name,
           QString rootPath,
           quint64 availableBytes,
           quint64 totalBytes,
           QString fileSystemType,
           QString device)
{
    mName            = name;
    mRootPath        = rootPath;
    mAvailableBytes  = availableBytes;
    mTotalBytes      = totalBytes;
    mFileSystemType  = fileSystemType;
    mDevice          = device;

}

/**
 * @brief Disk::getName
 * @return mName
 */
QString Disk::getName() const{
    return this->mName;
}

/**
 * @brief Disk::getRootPath
 * @return mRootPath
 */

QString Disk::getRootPath() const{
    return this->mRootPath;
}

/**
 * @brief Disk::getAvailableBytes
 * @return mAvailableBytes
 */
quint64 Disk::getAvailableBytes() const{
    return this->mAvailableBytes;
}

/**
 * @brief Disk::getTotalBytes
 * @return mTotalBytes
 */
quint64 Disk::getTotalBytes() const{
    return this->mTotalBytes;
}

/**
 * @brief Disk::getFileSystemType
 * @return mFileSystemType
 */
QString Disk::getFileSystemType() const{
    return this->mFileSystemType;
}

/**
 * @brief Disk::getDevice
 * @return mDevice
 */
QString Disk::getDevice() const{
    return this->mDevice;
}

/**
 * @brief Disk::showInfo
 * shows the details of disk
 */
void Disk::showInfo() const{
    qDebug() << "---------------- DISK INFO ------------------";
    qDebug() << "Name . . . . . . : " << getName();
    qDebug() << "Root path. . . . : " << getRootPath();
    qDebug() << "Available bytes. : " << getAvailableBytes()/1024/1024 << " MB .";
    qDebug() << "Total bytes. . . : " << getTotalBytes()/1024/1024 << " MB .";
    qDebug() << "File System type : " << getFileSystemType() ;
    qDebug() << "Device . . . . . : " << getDevice();
    qDebug() << "---------------------------------------------";
}

/**----------------------------Setter functions----------------------------**/
void Disk::setName(QString name){
    mName = name;
}

void Disk::setRootPath(QString rootPath){
    mRootPath = rootPath;
}

void Disk::setAvailableBytes(quint64 availableBytes){
    mAvailableBytes = availableBytes;
}

void Disk::setTotalBytes(quint64 totalBytes){
    mTotalBytes = totalBytes;
}

void Disk::setFileSystemType(QString fileSystemType){
    mFileSystemType = fileSystemType;
}

void Disk::setDevice(QString device){
    mDevice = device;
}
/**-----------------------------------------------------------------------**/
