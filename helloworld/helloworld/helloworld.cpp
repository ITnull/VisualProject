// helloworld.cpp : �������̨Ӧ�ó������ڵ㡣
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

