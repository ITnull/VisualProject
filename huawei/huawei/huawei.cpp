// huawei.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	while (cin >> n){
		vector<int> ivec;
		for (int i = 0; i<n; i++){
			int x;
			cin >> x;
			ivec.push_back(x);
		}
		sort(ivec.begin(),ivec.end());
		int iSortFlag;
		cin >> iSortFlag;
		if (iSortFlag==1)
		{
			reverse(ivec.begin(), ivec.end());
		}
		for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++)
		{
			cout << *it << endl;
		}
	}
	system("pause");
	return 0;
}