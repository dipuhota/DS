#include<stdio.h>
int l=1,num=4;
int print(int n);
int newline(int n);
int space(int n);
int main()
{
	print(num);
	return 0;
}
int print(int n)
{
	if(n>0)
	{
		printf("*");
		return print(n-1);
	}
	if(n==0)
	return newline(l);
	return;
}
int newline(int n)
{
	if(n<4)
	{printf("\n");
	return space(l++);
	}return;
}
int space(int n)
{
	if(n==0)
	return print(--num);
	printf(" ");
	return space(n-1);
}
