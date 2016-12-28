#ifndef DISK_H
#define DISK_H

#include <QString>

/**
 * @brief The Disk class
 * Acts as data structure to store information of mounted disks on the system
 */
class Disk
{
    QString mName;
    QString mRootPath;
    quint64 mAvailableBytes;
    quint64 mTotalBytes;
    QString mFileSystemType;
    QString mDevice;

public:
    /**
     * @brief Disk
     * Default constructor
     */
    explicit Disk();

    /**
     * @brief Disk
     * @param Name           - Stores display name of disk
     * @param RootPath       - Stores root path of disk
     * @param AvailableBytes - Stores available bytes of disk for user
     * @param TotalBytes     - Stores total bytes of disk
     * @param FileSystemType - Stores file system type
     * @param Device         - Stores device name
     */
    explicit Disk(QString Name ,
                  QString RootPath ,
                  quint64 AvailableBytes ,
                  quint64 TotalBytes ,
                  QString FileSystemType ,
                  QString Device);

    /**
     * @brief getName
     * @return mName
     */
    QString getName() const;

    /**
     * @brief getRootPath
     * @return mRootPath
     */
    QString getRootPath() const;

    /**
     * @brief getAvailableBytes
     * @return mAvaiableBytes
     */
    quint64 getAvailableBytes() const;

    /**
     * @brief getTotalBytes
     * @return mTotalBytes
     */
    quint64 getTotalBytes() const;

    /**
     * @brief getFileSystemType
     * @return mFileSystemType
     */
    QString getFileSystemType() const;

    /**
     * @brief getDevice
     * @return mDevice
     */
    QString getDevice() const;

    /**
     * @brief showInfo
     * shows the details of disk
     */
    void showInfo() const;

};

#endif // DISK_H
