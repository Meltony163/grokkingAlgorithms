#include<stdio.h>
void CountDown(int n)
{
	printf("%d ",n);
	if(n<=0)
	{
		return;
	}
	CountDown(n-1);
}