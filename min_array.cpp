//Wap to find the Max & Min value in array
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,888,50},i,min=a[0],max=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		else if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("min is %d\n ",min);
	printf("max is %d ",max);
	return 0;
}
