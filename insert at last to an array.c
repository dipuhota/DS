#include<stdio.h>
int main()
{
	int a[7]={10,20,30,40,50},i;
	int ele=999;
	a[6]=ele;
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
