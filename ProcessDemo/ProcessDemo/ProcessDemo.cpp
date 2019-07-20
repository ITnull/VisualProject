// ProcessDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	STARTUPINFO startupInfo = { 0 };
	PROCESS_INFORMATION processInformation = { 0 };

	BOOL bSuccess = CreateProcess(
		TEXT("C:\\Windows\\notepad.exe"), NULL, NULL,
		NULL, FALSE, NULL, NULL, NULL, &startupInfo,
		&processInformation);
	if (bSuccess)
	{
		cout << "Process started." << endl
			<< "Process ID:\t"
			<< processInformation.dwProcessId << endl;
	}
	else
	{
		cout << "Cannot start process!" << endl
			<< "Error code:\t" << GetLastError() << endl;
	}
	return system("pause");
}

