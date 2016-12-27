#ifndef SYSTEMUTIL_H
#define SYSTEMUTIL_H

#include "process.h"

#include <QObject>
#include <QProcess>
#include <QList>

class SystemUtil : public QObject
{

    Q_OBJECT

    QProcess     *mTopProcess; //qprocess top handle the subprocess 'top'
    QString      mProcess;     //the path of subprocess 'top'
    QStringList  mEnv;         //sets necessary TERM environment variable required for top command
    QStringList  mArguments;   //arguments list to handle 'top' process properly
    QString      mOutputString;
    QStringList  mOutputList;

    QList<Process> *mProcessList;

public:
    explicit SystemUtil(QObject *parent = 0);
    ~SystemUtil();
    QList<Process>* parseProcesses();

signals:

public slots:

};

#endif // SYSTEMUTIL_H
