#include "stdafx.h"
#include "Person.h"
#include<iostream>
using namespace std;


Person::Person(string name,int age)
{
	name = name;
	age = age;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}

void Person::eat()
{
	cout << "eat()" << endl;
}

void Person::sleep(){
	cout << "sleep()" << endl;
}