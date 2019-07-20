// CLIENT_WIN.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <WinSock2.h>
using namespace std;
void ErrorHandling(char* message);

int _tmain(int argc, char* argv[])
{
	WSADATA wsaData;
	SOCKET hSocket;
	SOCKADDR_IN servAddr;

	char message[30];
	int strLen;
	if (argc != 3)
	{
		printf("usage : %s <IP> <port>\n", argv[0]);
		exit(1);
	}

	hSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (hSocket == INVALID_SOCKET)
		ErrorHandling("socket() error");

	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_family = AF_INET;
	//servAddr.sin_addr.s_addr = inet_addr(argv[1]);
	char* addr = "127.0.0.1";
	servAddr.sin_addr.s_addr = inet_addr(addr);
	//servAddr.sin_port = htons(atoi(argv[2]));
	servAddr.sin_port = htons(9190);

	if (connect(hSocket, (SOCKADDR*)&servAddr, sizeof(servAddr)) == SOCKET_ERROR)
		ErrorHandling("connect() error");

	strLen = recv(hSocket, message, sizeof(message) - 1, 0);
	if (strLen == -1)
		ErrorHandling("read() error!");
	printf("Message from server: %s \n", message);

	closesocket(hSocket);
	WSACleanup();
	return 0;
}

void ErrorHandling(char* message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}

