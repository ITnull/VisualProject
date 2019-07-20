#include "stdafx.h"
#include "Worker.h"
#include <iostream>
using namespace std;


Worker::Worker(int salary, string name, int age) :Person(name, age)
{
}

Worker::~Worker()
{
}

void Worker::worker(){
	cout << "i am working" << endl;
}

string Worker::showMess(){
	return message;
}
