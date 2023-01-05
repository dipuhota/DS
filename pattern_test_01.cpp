#include<stdio.h>
int ptn(int n)
{

if(n>0)
{
	ptn(n-1);
	printf("1");
	}
}
int num(int n)
{
	if(n>0)
	{
		num(n-1);
	}
	ptn(n);
	printf("\n");
}
int main()
{

int n=4;
num(n);
return 0;
}

