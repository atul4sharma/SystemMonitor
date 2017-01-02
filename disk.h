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
     * @param name           - Stores display name of disk
     * @param rootPath       - Stores root path of disk
     * @param availableBytes - Stores available bytes of disk for user
     * @param totalBytes     - Stores total bytes of disk
     * @param fileSystemType - Stores file system type
     * @param device         - Stores device name
     */
    explicit Disk(QString name,
                  QString rootPath,
                  quint64 availableBytes,
                  quint64 totalBytes,
                  QString fileSystemType,
                  QString device);

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

    /**
     * Setter functions
     */
    /**-------------------------------------------------------------**/
    void setName(QString name);
    void setRootPath(QString rootPath);
    void setAvailableBytes(quint64 availableBytes);
    void setTotalBytes(quint64 totalBytes);
    void setFileSystemType(QString fileSystemType);
    void setDevice(QString device);
    /**-------------------------------------------------------------**/

};

#endif // DISK_H
