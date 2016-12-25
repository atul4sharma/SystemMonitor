#ifndef SYSTEMUTIL_H
#define SYSTEMUTIL_H

#include <QObject>
#include <QProcess>


class SystemUtil : public QObject
{

    Q_OBJECT

    QProcess     *topProcess; //qprocess top handle the subprocess 'top'
    QString      process;     //the path of subprocess 'top'
    QStringList  env;         //sets necessary TERM environment variable required for top command
    QStringList  arguments;   //arguments list to handle 'top' process properly

public:
    explicit SystemUtil(QObject *parent = 0);

signals:

public slots:
    //just for debugging purposes
    void startFunction();
    void endFunction(int val);

};

#endif // SYSTEMUTIL_H
