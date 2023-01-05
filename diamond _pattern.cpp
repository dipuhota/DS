#include<stdio.h>
int m=3,num=-1,m1=1,num1=7;
int space(int n);
int print(int n);
int space2(int n);
int print2(int n);
int main()
{
	space(m);
	space2(m1);
	return 0;
}
int space(int n)
{
	if(n>0)
	{
		printf(" ");
		return space(n-1);
	}
	if(n==0 && n>=0)
	return print(num+=2);
	return 0;
}
int print(int n)
{
	if(n>0)
	{
		printf("*");
		return print(n-1);
	}
	if(n==0 && n>=0)
	{
		printf("\n");
		return space(--m);
	}
	return 0;
}
int space2(int n)
{
	if(n>0)
	{
		printf(" ");
		return space2(n-1);
	}
	if(n==0 && n>=0)
	return print2(num1-=2);
	return 0;
}
int print2(int n)
{
	if(n>0)
	{
		printf("*");
		return print2(n-1);
	}
	if(n==0 && n>=0)
	{
		printf("\n");
		return space2(++m1);
	}
	return 0;
}
