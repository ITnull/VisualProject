// Heritence01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Worker.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//string message, int salary,string name, int age, 
	Worker *w =new  Worker(2000,"rose",20);

	cout << w->age << endl;

	cout << w->showMess() << endl;

	system("pause");
	return 0;
}

