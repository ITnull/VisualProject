// CtestDemo_01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
C��׼��
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
	// ��ȡ�ļ�����
	ofstream fout;
	fout.open(outpath, ios::out);
	if (!fout){
		cout << "file open failed!";
	}
	for (int i = 0; getline(infile, buf); i++){
		cout << buf << endl;
		//���ļ���д����
		fout << buf << endl;
	}


	system("pause");
	return 0;
}

