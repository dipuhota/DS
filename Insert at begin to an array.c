#include<stdio.h>
int main()
{
	int a[7]={10,20,30,40,50,60},i,ele=999;
	for(i=5;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=ele;
	for(i=0;i<7;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
