#ifndef CENTER_H
#define CENTER_H
#include <QUdpSocket>

class Center: public QUdpSocket
{
private:
    qint16 port;
    char *data;
public:
    Center();
    void SendMesaage();
};

#endif // CENTER_H
