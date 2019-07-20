#pragma once
#include "Person.h"
class Worker : public Person
{
private:
	string profession;
protected:
	string message;
public:
	Worker(int salary,string name, int age);

	~Worker();
	int salary;
	void worker();

	string showMess();
};

