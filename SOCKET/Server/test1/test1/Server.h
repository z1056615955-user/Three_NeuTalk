#pragma once
#include<WinSock2.h>
#include<iostream>
#include <vector>
#include<string>
#include <atomic>
#pragma  comment(lib,"WS2_32.lib")

#define DEFAULT_PORT 8888
#define Buf_Size 64         //接收数据缓冲区大小



class Server
{
public:
	int init();
	int connectClient();
	int recvFromClient();
	int sendToClient(SOCKET soc, char* msg);
public:
	WORD    wVersionRequested;
	WSADATA wsaData;
	int     err, iLen;
	SOCKET _sockSrv;
	int clientnum;
};

