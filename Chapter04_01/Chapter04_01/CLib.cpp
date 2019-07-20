#include "CLib.h"
#include "stdafx.h"
#include <iostream>

using namespace std;

const int increment = 100;

void initialize(CStash* s, int sz){
	s->size = sz;
	s->quantity = 0;
	s->storage = 0;
	s->next = 0;
}

int add(CStash* s, const void* element){
	if (s->next >= s->quantity)
		inflate(s, increment);
}

void cleanup(CStash* s){

}



void* fetch(CStash* s, int index){

}
int count(CStash* s){

}

void inflate(CStash* s, int increase){

}