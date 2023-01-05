#include<stdio.h>
int main()
{
	int a[5]={10,20,30,888,50},i,max=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max is %d ",max);
	return 0;
}
