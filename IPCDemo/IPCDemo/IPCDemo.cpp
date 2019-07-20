// IPCDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Windows.h"
#include <iostream>

using namespace std;

#define COMMUNICATION_OBJECT_NAME TEXT("__FILE_MAPPING__")
#define SYNCHRONIZING_MUTEX_NAME TEXT("__TEST_MUTEX__")
#define WINDOW_CLASS_NAME TEXT("__TMPWINDCLASS__")

typedef struct _tagCOMMUNICATIONOBJECT
{
	HWND hWndClient;
	BOOL bExitLoop;
	LONG lSleepTimeout;
} COMMUNICATIONOBJECT,*PCOMMUNICATIONOBJECT;

LRESULT CALLBACK WndProc(HWND hDlg, UINT uMsg, WPARAM wPARAM, LPARAM lParam);
HWND InitializeWnd();
PCOMMUNICATIONOBJECT pCommObject = NULL;
HANDLE hMapping = NULL;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Interprocess communication demo." << endl;
	HWND hWnd = InitializeWnd();
	if (!hWnd)
	{
		cout << "Cannot create window!" << endl << "ERROR:\t" <<
			GetLastError() << endl;
		return 1;
	}

	HANDLE hMutex = CreateMutex(NULL, FALSE, SYNCHRONIZING_MUTEX_NAME);
	if (!hMutex)
	{
		cout << "Cannot create mutex!" << endl << "ERROR:\t" <<
			GetLastError() << endl;
		return 1;
	}
	hMapping = CreateFileMapping((HANDLE)-1, NULL, PAGE_READWRITE, 0,
		sizeof(COMMUNICATIONOBJECT), COMMUNICATION_OBJECT_NAME);
	if (!hMapping)
	{
		cout << "Cannot create mapping object!" << endl << "ERROR:\t"
			<< GetLastError() << endl;
		return 1;
	}
	pCommObject = (PCOMMUNICATIONOBJECT)MapViewOfFile(hMapping, FILE_MAP_WRITE, 0, 0, 0);
	if (pCommObject)
	{
		pCommObject->bExitLoop = FALSE;
		pCommObject->hWndClient = hWnd;
		pCommObject->lSleepTimeout = 250;
		UnmapViewOfFile(pCommObject);
	}
	STARTUPINFO startupInfoRed = { 0 };

	return 0;
}

