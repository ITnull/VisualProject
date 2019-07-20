#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string personID;
public:
	Person(string, int);

	~Person();

	string name;
	int age;

	void eat();
	void sleep();
};

