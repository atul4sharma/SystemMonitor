#ifndef SYSTEMUTIL_H
#define SYSTEMUTIL_H

#include <QObject>
#include <QProcess>


class SystemUtil : public QObject
{

    Q_OBJECT

    QProcess     *mTopProcess; //qprocess top handle the subprocess 'top'
    QString      mProcess;     //the path of subprocess 'top'
    QStringList  mEnv;         //sets necessary TERM environment variable required for top command
    QStringList  mArguments;   //arguments list to handle 'top' process properly
    QString      mOutputString;
    QStringList  mOutputList;

public:
    explicit SystemUtil(QObject *parent = 0);

signals:

public slots:

};

#endif // SYSTEMUTIL_H
