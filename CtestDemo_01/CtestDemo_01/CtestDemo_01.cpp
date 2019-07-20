// CtestDemo_01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
C标准库
isalnum()

*/

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream infile;
	string inpath = "E:\\VisualProjects\\readme.txt";
	string outpath = "E:\\VisualProjects\\out.txt";
	infile.open(inpath, ios::in);
	if (!infile){
		cout << "file open falied!";
	}
	string buf;
	// 读取文件内容
	ofstream fout;
	fout.open(outpath, ios::out);
	if (!fout){
		cout << "file open failed!";
	}
	for (int i = 0; getline(infile, buf); i++){
		cout << buf << endl;
		//网文件里写内容
		fout << buf << endl;
	}


	system("pause");
	return 0;
}

