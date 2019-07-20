#include "Y.h"


Y::Y()
{
	i = 0;
}


Y::~Y()
{
}

int Y::change(){
	i = permute();
	return i;
}

void Y::set(int ii){
	i = ii;
	X::set(ii);
}
