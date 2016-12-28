#ifndef DISK_H
#define DISK_H

#include <QString>

class Disk
{
    QString mName;
    QString mRootPath;
    quint64 mAvailableBytes;
    quint64 mTotalBytes;
    QString mFileSystemType;
    QString mDevice;

public:
    explicit Disk();
    explicit Disk(QString Name ,
                  QString RootPath ,
                  quint64 AvailableBytes ,
                  quint64 TotalBytes ,
                  QString FileSystemType ,
                  QString Device);

    QString getName();
    QString getRootPath();
    quint64 getAvailableBytes();
    quint64 getTotalBytes();
    QString getFileSystemType();
    QString getDevice();

};

#endif // DISK_H
