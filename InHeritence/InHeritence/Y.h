#pragma once
#include "X.h"
class Y :public X
{
private:
	int i;
public:
	Y();
	~Y();

	int change();
	void set(int ii);
};

