//Wap to print all negative elements in array
#include<stdio.h>
int main()
{
	int a[6]={1,-3,5,-7,9,-10},i;
	printf("The negative elements are:");
	for(i=0;i<6;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
