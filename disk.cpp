#include "disk.h"

#include <QDebug>

/**
 * @brief Disk::Disk
 * Default constructor
 */
Disk::Disk()
{

}

/**
 * @brief Disk::Disk     Parametrized constructor
 * @param Name           - Stores display name of disk
 * @param RootPath       - Stores root path of disk
 * @param AvailableBytes - Stores available bytes of disk for user
 * @param TotalBytes     - Stores total bytes of disk
 * @param FileSystemType - Stores file system type
 * @param Device         - Stores device name
 */
Disk::Disk(QString Name ,
           QString RootPath ,
           quint64 AvailableBytes ,
           quint64 TotalBytes ,
           QString FileSystemType ,
           QString Device)
{
    mName            = Name ;
    mRootPath        = RootPath ;
    mAvailableBytes  = AvailableBytes ;
    mTotalBytes      = TotalBytes ;
    mFileSystemType  = FileSystemType ;
    mDevice          = Device;

}

/**
 * @brief Disk::getName
 * @return mName
 */
QString Disk::getName() const{
    return this->mName ;
}

/**
 * @brief Disk::getRootPath
 * @return mRootPath
 */

QString Disk::getRootPath() const{
    return this->mRootPath ;
}

/**
 * @brief Disk::getAvailableBytes
 * @return mAvailableBytes
 */
quint64 Disk::getAvailableBytes() const{
    return this->mAvailableBytes ;
}

/**
 * @brief Disk::getTotalBytes
 * @return mTotalBytes
 */
quint64 Disk::getTotalBytes() const{
    return this->mTotalBytes ;
}

/**
 * @brief Disk::getFileSystemType
 * @return mFileSystemType
 */
QString Disk::getFileSystemType() const{
    return this->mFileSystemType ;
}

/**
 * @brief Disk::getDevice
 * @return mDevice
 */
QString Disk::getDevice() const{
    return this->mDevice ;
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
