#include<stdio.h>
int Fact(int n)
{
	if(n==1)
		return 1;
	return n*Fact(n-1);
}