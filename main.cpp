#include <QCoreApplication>

#include "systemutil.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SystemUtil *subProcess = new SystemUtil();


    return a.exec();
}
