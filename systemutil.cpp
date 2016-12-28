#include "systemutil.h"
#include <QDebug>

/**
 * @brief SystemUtil::SystemUtil
 * @param parent
 * Constructor to initialize to top command
 */
SystemUtil::SystemUtil( QObject *parent )
    : QObject( parent ){

    mProcessList = new QList<Process>();

    mTopProcess  =  new QProcess( parent );
    mEnv         =  QProcess::systemEnvironment();

    mEnv << "TERM=vt100" << "COLUMNS=512";
    mProcess = "top";
    mArguments << "-b" << "-n" << "1" ;

    mTopProcess -> setEnvironment( mEnv );
    mTopProcess -> start( mProcess , mArguments );


    if( !mTopProcess->waitForStarted() ) {
        qDebug() << "ERROR : " << mTopProcess->error();
    }

    mTopProcess->waitForFinished() ;

    mOutputString = QString( mTopProcess -> readAll() );

    mOutputList = mOutputString.split('\n' , QString::SkipEmptyParts );


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
 * @return list of processes
 */
QList<Process>* SystemUtil::parseProcesses(){

    // loop start from 9 because mOutputList.at( 9 ) contains the first process in the list
    for(int  i = 9 ; i < mOutputList.size() ; i++ ){

        QString str = mOutputList.at( i ) ;

        // splits one process string on the basis of whitespaces.
        QStringList splittedString = str.split( QRegExp("\\s"), QString::SkipEmptyParts );

        //splits the numerical value of memory from string on the basis of m
        QStringList memValue = splittedString[ 5 ].split( QRegExp("m"), QString::SkipEmptyParts );

        QString pName   = splittedString.last() ;
        QString user    = splittedString[ 1 ] ;
        UINT pID        = splittedString[ 0 ].toLong();
        float cpuUsage  = splittedString[ 6 ].toDouble();
        double memUsage = memValue[0].toDouble();

        Process p( pID, pName, cpuUsage, memUsage, user);

        mProcessList->append( p );

    }

    return mProcessList;
}
