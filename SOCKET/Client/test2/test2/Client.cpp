#include "Client.h"
#pragma  comment(lib,"WS2_32.lib")
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma warning(disable:4996);
using namespace std;
int Client::initconnect()
{
    err = WSAStartup(wVersionRequested, &wsaData); //load win socket  
    if (err != 0)
    {
        cout << "Load WinSock Failed!";
        return -1;
    }
    //(2)create socket  
    SOCKET sockClt = socket(AF_INET, SOCK_STREAM, 0);
    if (sockClt == INVALID_SOCKET) {
        cout << "socket() fail:" << WSAGetLastError() << endl;
        return -2;
    }
    SOCKADDR_IN addrSrv;
    addrSrv.sin_family = AF_INET;
    addrSrv.sin_addr.s_addr = inet_addr("192.168.31.170");
    addrSrv.sin_port = htons(DEFAULT_PORT);
    err = connect(sockClt, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));

    if (err == INVALID_SOCKET)
    {
        cout << "connect() fail" << WSAGetLastError() << endl;
        return -1;
    }

    char sendBuf[1024], hostname[100];
    if (gethostname(hostname, 100) != 0)    //get host name  
        strcpy(hostname, "None");
    strcpy(sendBuf, hostname);
    strcat(sendBuf, "have connected to you!");

    closesocket(sockClt);
    //(11)clean up winsock  
    WSACleanup();
    return 0;
}

