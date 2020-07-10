#pragma once

#include<stdio.h>
#include<WinSock2.h>
#include<iostream>
#include <vector>
#pragma  comment(lib,"WS2_32.lib")
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma warning(disable:4996);
using namespace std;

#define DEFAULT_PORT 8888
class Client
{
public:
	int initconnect();
public:
	WORD    wVersionRequested;
	WSADATA wsaData;
	int     err, iLen;
	SOCKET sockClt;

};

