#include "systemutil.h"
#include <QDebug>
#include <QStorageInfo>

/**
 * @brief SystemUtil::SystemUtil
 * @param parent
 * Constructor to initialize variables
 */
SystemUtil::SystemUtil( QObject *parent )
    : QObject( parent )
{

    mTopProcess  =  new QProcess( parent );

    mEnv         =  QProcess::systemEnvironment();

    mEnv << "TERM=vt100" << "COLUMNS=512";
    mProcess = "top";
    mArguments << "-b" << "-n" << "1" ;

    mTopProcess -> setEnvironment( mEnv );

}

/**
 * @brief SystemUtil::getProcessesList
 * @return list of processes
 */
QList<Process>* SystemUtil::getProcessesList(){

    mProcessList = new QList<Process>();

    mTopProcess -> start( mProcess , mArguments );


    if( !mTopProcess->waitForStarted() ) {
        qDebug() << "ERROR : " << mTopProcess->error();
    }

    mTopProcess->waitForFinished() ;

    mOutputString = QString( mTopProcess -> readAll() );

    mOutputList = mOutputString.split('\n' , QString::SkipEmptyParts );

    parseProcesses();

    return mProcessList;

}

/**
 * @brief SystemUtil::~SystemUtil
 * Destructor
 */
SystemUtil::~SystemUtil(){
    delete mProcessList;
}

/**
 * @brief SystemUtil::parseProcesses
 * takes the output of top command, split it and store it in Process data structure
 * appends the process to mProcessList
 */
void SystemUtil::parseProcesses(){

    // loop start from 9 because mOutputList.at( 9 ) contains the first process in the list
    for(int  i = 9 ; i < mOutputList.size() ; i++ ){

        QString str = mOutputList.at( i ) ;

        // splits one process string on the basis of whitespaces.
        QStringList splittedString = str.split( QRegExp("\\s"), QString::SkipEmptyParts );

        //splits the numerical value of memory from string on the basis of m
        QStringList memValue = splittedString[ 5 ].split( QRegExp("m"), QString::SkipEmptyParts );

        QString pName   = splittedString.last() ;
        QString user    = splittedString[ 1 ] ;
        quint64 pID     = splittedString[ 0 ].toLong();
        float cpuUsage  = splittedString[ 6 ].toDouble();
        double memUsage = memValue[0].toDouble();

        Process p( pID, pName, cpuUsage, memUsage, user);

        mProcessList->append( p );

    }

}

/**
 * @brief SystemUtil::getDiskList
 * @return list of disks
 */
QList<Disk>* SystemUtil::getDiskList(){

    mDiskList = new QList<Disk>();
    analyzeDisk();

    return mDiskList;
}

/**
 * @brief SystemUtil::analyzeDisk
 * extracts information about mounted disks
 */
void SystemUtil::analyzeDisk(){

    foreach ( const QStorageInfo &disk, QStorageInfo::mountedVolumes()) {
        if( disk.isValid() && disk.isReady() ){
            if( !disk.isReadOnly() ){

                Disk d(disk.displayName() ,
                       disk.rootPath() ,
                       disk.bytesAvailable() ,
                       disk.bytesTotal() ,
                       disk.fileSystemType() ,
                       disk.device());

                mDiskList->append(d);

            }
        }
    }
}

