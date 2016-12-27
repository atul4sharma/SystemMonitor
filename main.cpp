#include <QCoreApplication>

#include "systemutil.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SystemUtil *subProcess = new SystemUtil();
    QList<Process> *processList = subProcess->parseProcesses();

    for( int  i = 0 ; i < processList->size() ; i++ )
        processList->at( i ).showInfo();

    return a.exec();
}
