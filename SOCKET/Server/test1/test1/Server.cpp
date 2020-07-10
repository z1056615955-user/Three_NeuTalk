#include "Server.h"
#include<iostream>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma warning(disable:4996);

int Server::init()
{

    wVersionRequested = MAKEWORD(2, 2);//create 16bit data  
//(1)Load WinSock  
    err = WSAStartup(wVersionRequested, &wsaData); //load win socket  
    if (err != 0)
    {
        cout << "Load WinSock Failed!";
        return -1;
    }
    //(2)create socket  
     _sockSrv = socket(AF_INET, SOCK_STREAM, 0);
    if (_sockSrv == INVALID_SOCKET) {
        cout << "socket() fail:" << WSAGetLastError() << endl;
        return -2;
    }
    //(3)server IP  
    SOCKADDR_IN addrSrv;
    addrSrv.sin_family = AF_INET;
    addrSrv.sin_addr.s_addr = htonl(INADDR_ANY);//Auto IP, byte sequence change  
    addrSrv.sin_port = htons(DEFAULT_PORT);
    //(4)bind  
    err = bind(_sockSrv, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));
    if (err != 0)
    {

        cout << "bind()fail" << WSAGetLastError() << endl;
        return -3;
    }
    //  
//(5)listen  
    err = listen(_sockSrv, 5);
    if (err != 0)
    {

        cout << "listen()fail" << WSAGetLastError() << endl;
        return -4;
    }
    cout << "Server waitting...:" << endl;
    clientnum = 0;
    return 0;
}

int Server::connectClient()
{
    SOCKADDR_IN addrClt;
    int len = sizeof(SOCKADDR);


    while (1)
    {
        //(7)accept  
        SOCKET sockConn = accept(_sockSrv, (SOCKADDR*)&addrClt, &len);
        char sendBuf[1024], hostname[100];
        if (gethostname(hostname, 100) != 0)    //get host name  
            strcpy(hostname, "None");
        sprintf(sendBuf, "Welecome %s connected to %s(%d)!\n", inet_ntoa(addrClt.sin_addr), hostname, (int)sockConn);
        printf(sendBuf);
        //clientnum++;
    }
    //(10)close server sock  
    closesocket(_sockSrv);
    //(11)clean up winsock  
    WSACleanup();
    return 0;
}

int Server::recvFromClient()
{
    int err;
    char buf[Buf_Size];            //来自客户端发送来的的数据
    ZeroMemory(buf, Buf_Size);     //清空缓冲区数据
    err = recv(_sockSrv, buf, Buf_Size, 0);
    if (err == INVALID_SOCKET)
    {
        closesocket(_sockSrv);
        std::cout << WSAGetLastError();
        return -5;
    }
    return 0;
}

int Server::sendToClient(SOCKET soc,char* msg)
{
    
    char buf[Buf_Size];            //发送的数据
    ZeroMemory(buf, Buf_Size);
    strcpy(buf, msg);
    err = send(soc, buf, strlen(buf), 0);
    //std::cout << buf << std::endl;
    //int i = GetLastError();
    //std::cout << i;
    if (err == INVALID_SOCKET)
    {
        closesocket(soc);
        std::cout << "发送失败" << std::endl;
        WSACleanup();
        return -6;
    }
    else
    {
        std::cout << "发送成功" << std::endl;
    }
    return 0;
}
