#include "systemutil.h"
#include <QDebug>

SystemUtil::SystemUtil( QObject *parent )
    : QObject( parent )
{
    topProcess  =  new QProcess( parent );
    env         =  QProcess::systemEnvironment();

    env << "TERM=vt100";
    process = "top";
    arguments << "-b" << "-n" << "1" ;

    topProcess -> setEnvironment( env );
    topProcess -> setProcessChannelMode( QProcess::ForwardedChannels );
    topProcess -> start( process , arguments );

    connect( topProcess , SIGNAL(started()) , this , SLOT(startFunction()));
    connect( topProcess , SIGNAL(finished(int)) , this , SLOT(endFunction(int)));
}

void SystemUtil::startFunction()
{
    qDebug() << "-------------------------------" ;
    qDebug() << "--------PROCESS STARTED--------" ;
    qDebug() << "-------------------------------" ;

}

void SystemUtil::endFunction(int val)
{
    qDebug() << "-------------------------------" ;
    qDebug() << "PROCESS EXITED WITH CODE . "<<val ;
    qDebug() << "-------------------------------" ;

}
