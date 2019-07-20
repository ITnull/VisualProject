// Offer_Code.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

/*	һ��FindOfArrayInt(int target, vector<vector<int> > array):
	��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
	ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ
	���������ж��������Ƿ��и�������
*/
bool FindOfArrayInt(int target, vector<vector<int> > array){
	/*˼�룺���ֲ���
		��ÿһ�п���������������飬
		���ö��ֲ��ң�
		ͨ������ÿһ�еõ��𰸣�
		ʱ�临�Ӷ���nlogn
	*/
	int row = array.size();
	int col = array[0].size();

	for (int i = 0; i < row;i++){
		//���ֲ��Ҵ���

	}
	return true;
}

bool FindOfArrayInt2(int target, vector<vector<int> > array){
	/*˼�룺
		����������ģ������½��������������ֵݼ����������ֵ�����
		��˴����½ǿ�ʼ���ң���Ҫ�������ֱ����½����ִ�ʱ����
		��Ҫ�������ֱ����½�����Сʱ������
	*/
	
	int row = array.size();
	int col = array[0].size();
	
	//��i,j������Ϊ������±�
	for (int i = row - 1, j = 0; i >= 0 && j < col;){
		if (target==array[i][j]){
			return true;
		}

		if (target<array[i][j]){
			i--;
			continue;
		}
		if (target > array[i][j]){
			j++;
			continue;
		}
	}
	return false;
}

/*����jumpFloor(int number):
	һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж���
	���������Ⱥ����ͬ�㲻ͬ�Ľ������
*/
int jumpFloor(int number) {
	return 0;
}


bool BinarySearch(int target,vector<int> array){
	int low = 0;
	int high = array.size() - 1;
	while (low<=high){
		int mid = (low + high) / 2;
		
		if (target < array[mid]){
			high = mid - 1;
		}
		else if (target > array[mid]){
			low = mid + 1;
		}
		else{
			return true;
		}
	}
	return false;
}

/*�۰��������
*/
void BinaryInsertSort(int a[], int len){
	for (int i = 1; i < len; i++){
		int key = a[i];
		int low = 0, mid, high = i - 1;
		while (low <= high){
			mid = (low + high) / 2;
			if (key > a[mid]){
				low = mid + 1;
			}
			else if (key < a[mid]){
				high = mid - 1;
			}
		}
		//��low����Ԫ��(����low��ָ���Ԫ��)ȫ������һ��λ��
		for (int j = i - 1; j >= low; j--)
		{
			a[j + 1] = a[j];
		}
		a[low] = key;
	}
}
/*�ַ����滻:replaceSpace(char *str,int length)
	��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20�������磬���ַ���ΪWe Are Happy.
	�򾭹��滻֮����ַ���ΪWe%20Are % 20Happy��
*/
void replaceSpace(char *str, int length){
	string s;
	for (int i = 0; i < length; i++){
		if (str[i]!=' '){
			s += str[i];
		}
		else{
			s += "% 20";
		}
	}
	cout << s << endl;
}

/*
	ð������
*/
void BubbleSort(int a[], int len){
	int len2 = len;
	for (int i = 1; i<len; i++)
	{
		for (int j = 1; j<len2; j++)
		{
			if (a[j - 1]>a[j])
			{
				int temp;
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
		len2--;
	}
	//������
	for (int i = 0; i < len; i++){
		cout << a[i] << " ";
	}
}

/*
	ѡ������:ÿ��ѡ����С��������Ԫ��
*/
void SelectionSort(int a[], int len){
	
	int temp;
	for (int i = 0; i < len; i++){
		//�ҳ���С��Ԫ�ص�index
		int index = i;
		for (int j = i+1; j < len; j++){
			if (a[index] > a[j]){
				index = j;
			}
		}
		//����СԪ���滻
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}

	for (int i = 0; i < len; i++){
		cout << a[i] << " ";
	}
}

/*
	���ݱ��¼��������������ֵ����Ա�������ͬ�ļ�¼���кϲ�����
	����ͬ��������ֵ����������㣬�������keyֵ������������

	��������:
	�������ֵ�Եĸ���
	Ȼ������ɶԵ�index��valueֵ���Կո����
	�������:
	����ϲ���ļ�ֵ�ԣ����У�
*/
void IndexSameMerge(){
	int n;
	cout << "�������ֵ�Եĸ�����" << endl;
	cin >> n;
	map<int, int> m;
	int key, value;
	for (int i = 0; i < n; i++){
		cin >> key >> value;
		if (!m[key]){
			m[key] = value;
		}
		else{
			m[key] += value;
		}
	}
	//���ϲ��õ�map���
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
}

/*
	���մ���������Ķ�˳�򣬷���һ�������ظ����ֵ��µ�����
	9876673
	37689
*/
void OutNotRepeat(){
	string str;
	getline(cin, str);
	int count = 0;
	map<char, int>m;
	for (int i = str.size() - 1; i >= 0; i--){
		if (!m[str[i]]){
			cout << str[i];
			m[str[i]] = 1;
		}
		else{
			continue;
		}
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	/*һ�����԰���
		4*4�Ķ�λ����
		1  2  3  4
		5  6  7  8
		9  10 11 12
		13 14 15 16
	*/
	vector<vector<int>> vec;
	vector<int> vec1;
	int x=1;
	for (int i = 0; i < 4; i++){
		vec1.clear();		//ÿ�ζ�Ҫclear
		for (int j = 0; j < 4; j++){
			vec1.push_back(x);
			x+=2;
		}
		vec.push_back(vec1);
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << vec[i][j]<<" ";
		}
		cout << endl;
	}

	int target[] = { 0, 6, 11, 19, 21, 28, 31, 37, 50, 100 };

	/*****************FindOfArrayInt2�㷨����**********************/
	for (int i = 0; i < 10; i++){
		if (FindOfArrayInt2(target[i], vec)){
			cout << "��λ�����д��ڸ�������"<<target[i] << endl;
		}
		else{
			cout << "��λ�����в����ڸ�������"<<target[i] << endl;
		}
	}
	cout << endl;

	/*****************BinarySearch() ���ֲ����㷨����**********************/
	vector<int> bsvec;
	int array[] = { 1, 10, 11, 21, 28, 37, 45, 57, 60, 72, 83, 90, 100, 143, 150 };
	for (int i = 0; i < 15; i++){
		bsvec.push_back(array[i]);
		cout << array[i] << " ";
	}
	for (int i = 0; i < 10; i++){
		if (BinarySearch(target[i], bsvec)){
			cout << "�����д����������" << target[i] << endl;
		}
		else{
			cout << "�����в������������" << target[i] << endl;
		}
	}
	cout << endl;

	/********************replaceSpace(char *str, int length)����**********/
	char str[] = {"hello world"};
	int len = strlen(str);
	//cout << len << endl;
	replaceSpace(str,len);


	/****************BubbleSort(int a[], int len) ð���������*************/
	int a[] = { 23, 11, 5, 100, 58, 45, 76, 82, 65, 99 };
	for (int i = 0; i < 10; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	cout <<"ð����������";
	BubbleSort(a, 10);

	cout << endl;
	/**************SelectionSort(int a[], int len) ѡ���������**************/
	cout << "ѡ����������";
	SelectionSort(a, 10);

	cout << endl;
	/**************BInsertSort(int a[], int len) �۰�����������************/
	int B[] = { 1, 10, 11, 21, 28, 37, 45, 57, 60, 72, 83, 90, 100, 143, 150 };
	//�����鳤�ȷ���
	BinaryInsertSort(B, sizeof(B) / sizeof(int));
	cout << "�۰��������Ľ����";
	for (int i = 0; i < sizeof(B) / sizeof(int); i++){
		cout << B[i] << " ";
	}

	cout << endl;
	/*****************************************/
	IndexSameMerge();

	cout << endl;
	/*********************************************/
	OutNotRepeat();

	system("pause");
	return 0;
}

