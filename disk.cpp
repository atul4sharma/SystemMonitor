#include "disk.h"

#include <QDebug>

Disk::Disk()
{

}

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

QString Disk::getName() const{
    return this->mName ;
}

QString Disk::getRootPath() const{
    return this->mRootPath ;
}

quint64 Disk::getAvailableBytes() const{
    return this->mAvailableBytes ;
}

quint64 Disk::getTotalBytes() const{
    return this->mTotalBytes ;
}

QString Disk::getFileSystemType() const{
    return this->mFileSystemType ;
}

QString Disk::getDevice() const{
    return this->mDevice ;
}

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
