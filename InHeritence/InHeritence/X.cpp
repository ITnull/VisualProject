#include "X.h"


X::X()
{
	i = 0;
}

void X::set(int ii){
	i = ii;
}

int X::read(){
	return i;
}

int X::permute(){
	return i * 47;
}

X::~X()
{
}
