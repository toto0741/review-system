// Copyright 2018 n.k.eun

#include <stdio.h>


int add(int a, int b)
{
	//check return code
	if(a<0) return -1;
	if(b<0) return -1;
	return a+b;
}

int main(){
	printf("hello world!!!\n");
	add(2, 3);
	add(-2, -3);
	return 0;
}


