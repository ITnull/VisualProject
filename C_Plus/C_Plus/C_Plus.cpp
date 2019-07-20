// C_Plus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct treeNode
{
	int value;
	treeNode *Left;
	treeNode *Right;
};

enum Month{
	One,Two,Three,Four,Five,Six,Seven,Eight,Night
};

int _tmain(int argc, _TCHAR* argv[])
{
	enum Month obj = One;
	//cout << obj << endl;
	for (int i = 0; i < argc; i++)
		cout << argv[i] << " "<<endl;

	system("pause");
	return 0;
}

