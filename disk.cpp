#include "disk.h"

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

QString Disk::getName(){
    return this->mName ;
}

QString Disk::getRootPath(){
    return this->mRootPath ;
}

quint64 Disk::getAvailableBytes(){
    return this->mAvailableBytes ;
}

quint64 Disk::getTotalBytes(){
    return this->mTotalBytes ;
}

QString Disk::getFileSystemType(){
    return this->mFileSystemType ;
}

QString Disk::getDevice(){
    return this->mDevice ;
}
