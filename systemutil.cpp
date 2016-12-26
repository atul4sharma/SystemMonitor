#include "systemutil.h"
#include <QDebug>

SystemUtil::SystemUtil( QObject *parent )
    : QObject( parent )
{
    mTopProcess  =  new QProcess( parent );
    mEnv         =  QProcess::systemEnvironment();

    mEnv << "TERM=vt100" << "COLUMNS=512";
    mProcess = "top";
    mArguments << "-b" << "-n" << "1" ;

    mTopProcess -> setEnvironment( mEnv );
    mTopProcess -> start( mProcess , mArguments );


    if( !mTopProcess->waitForStarted() )
        qDebug() << "ERROR : " << mTopProcess->error();


    mTopProcess->waitForFinished() ;

    mOutputString = QString( mTopProcess -> readAll() );

    mOutputList = mOutputString.split('\n' , QString::SkipEmptyParts );

    for(int i = 0 ; i < mOutputList.size() ; i++)
        qDebug() << mOutputList.at(i);


}
