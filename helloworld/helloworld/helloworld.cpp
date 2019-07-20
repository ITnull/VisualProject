// helloworld.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <thread>
#include <iostream>

using namespace std;
void hello(){
	cout << "hello concurrent world\n";
}

int _tmain(int argc, _TCHAR* argv[])
{
	thread t(hello);
	t.join();
	system("pause");
	return 0;
}

