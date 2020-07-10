#include<stdio.h>
#include<WinSock2.h>
#include<iostream>
#include <vector>
#include "Client.h"
#pragma  comment(lib,"WS2_32.lib")
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma warning(disable:4996);
using namespace std;

#define DEFAULT_PORT 8888

#define Buf_Size 64         //接收数据缓冲区大小

int main1()
{
    Client c;
    c.initconnect();
    return 0;
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
    SOCKET sockClt = socket(AF_INET, SOCK_STREAM, 0);
    if (sockClt == INVALID_SOCKET) {
        cout << "socket() fail:" << WSAGetLastError() << endl;
        return -2;
    }
    //(3)server IP  
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

    string msg = "1234";
    char buf[Buf_Size];            //发送的数据
    ZeroMemory(buf, Buf_Size);
    strcpy(buf, msg.c_str());
    err = send(sockClt, buf, strlen(buf), 0);
    //std::cout << buf << std::endl;
    //int i = GetLastError();
    //std::cout << i;
    if (err == INVALID_SOCKET)
    {
        closesocket(sockClt);
        std::cout << "发送失败" << std::endl;
        WSACleanup();
        return -6;
    }
    else
    {
        std::cout << "发送成功" << std::endl;
    }


    closesocket(sockClt);
    //(11)clean up winsock  
    WSACleanup();
    return 0;
}