#include "center.h"

Center::Center()
{
    //udpSocket=new QUdpSocket(this);
    port=23232;

    this->bind(port,QUdpSocket::ShareAddress|QUdpSocket::ReuseAddressHint);
     QByteArray begin ="Begin!";
    this->writeDatagram(begin,begin.length(),QHostAddress::Broadcast,port);


}
void Center::SendMesaage()
{
    QByteArray begin ="Begin!";
    writeDatagram(begin,begin.length(),QHostAddress::Broadcast,port);
}
