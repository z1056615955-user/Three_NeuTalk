#include<stdio.h>
#include<WinSock2.h>
#include<iostream>
#include <vector>
#include<thread>
#include "Server.h"
#pragma  comment(lib,"WS2_32.lib")
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#pragma warning(disable:4996);
using namespace std;

#define DEFAULT_PORT 8888
#define Buf_Size 64         //接收数据缓冲区大小

int threadrecv(SOCKET soc)
{
    int err;
    char buf[Buf_Size];            //来自客户端发送来的的数据
    ZeroMemory(buf, Buf_Size);     //清空缓冲区数据
    err = recv(soc, buf, Buf_Size, 0);
    if (err == INVALID_SOCKET)
    {
        closesocket(soc);
        std::cout << WSAGetLastError();
        return -5;
    }
    else
        std::cout << buf << std::endl;
}

int threadaccept(SOCKET soc)
{
    SOCKADDR_IN addrClt;
    int len = sizeof(SOCKADDR);


    while (1)
    {
        //(7)accept  
        SOCKET sockConn = accept(soc, (SOCKADDR*)&addrClt, &len);
        char sendBuf[1024], hostname[100];
        if (gethostname(hostname, 100) != 0)    //get host name  
            strcpy(hostname, "None");
        sprintf(sendBuf, "Welecome %s connected to %s(%d)!", inet_ntoa(addrClt.sin_addr), hostname, (int)sockConn);
        printf(sendBuf);
        if (sockConn != INVALID_SOCKET)
        {
            return 0;
        }

    }
}

int main1()
{
    Server s;
    s.init();
    thread thread_connect(&Server::connectClient, &s);
    thread_connect.detach();
    //s.connectClient();
    while (1)
    {
        Sleep(1);
    }

}
int main()
{
    WORD    wVersionRequested;
    WSADATA wsaData;
    int     err, iLen;
    wVersionRequested = MAKEWORD(2, 2);//create 16bit data  
//(1)Load WinSock  
    err = WSAStartup(wVersionRequested, &wsaData); //load win socket  
    if (err != 0)
    {
        cout << "Load WinSock Failed!";
        return -1;
    }
    //(2)create socket  
    SOCKET _sockSrv = socket(AF_INET, SOCK_STREAM, 0);
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
    //(6)client ip  
  
 /*   while (1)
    {
        threadaccept(_sockSrv);
        thread thread2(threadrecv, _sockSrv);
        thread2.join();
        break;
    }
    
    while (1)
    {
        Sleep(1);
    }


    */
    /*----------------------------------------------------------------------------------------*/
    SOCKADDR_IN addrClt;
    int len = sizeof(SOCKADDR);


        //(7)accept  
        SOCKET sockConn = accept(_sockSrv, (SOCKADDR*)&addrClt, &len);
        char sendBuf[1024], hostname[100];
        if (gethostname(hostname, 100) != 0)    //get host name  
            strcpy(hostname, "None");
        sprintf(sendBuf, "Welecome %s connected to %s(%d)!", inet_ntoa(addrClt.sin_addr), hostname, (int)sockConn);
        printf(sendBuf);
        if (sockConn == INVALID_SOCKET)
        {
            return 0;
        }
        char buf[Buf_Size];            //来自客户端发送来的的数据
        ZeroMemory(buf, Buf_Size);     //清空缓冲区数据
        err = recv(_sockSrv, buf, Buf_Size, 0);
        if (err == SOCKET_ERROR)
        {
            closesocket(_sockSrv);
            std::cout << WSAGetLastError();
            return -5;
        }
        else
            std::cout << buf << std::endl;

    //(10)close server sock  
    closesocket(_sockSrv);
    //(11)clean up winsock  
    WSACleanup();
    return 0;
}