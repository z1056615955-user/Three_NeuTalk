#include <QCoreApplication>
#include "center.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Center *p=new Center();

    while(1)
    {
        p->SendMesaage();
    }



    return a.exec();
}
