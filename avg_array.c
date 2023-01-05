#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},i,sum=0,avg;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/5;
	printf("Sum is=%d \n",sum);
		printf("Avg is=%d",avg);
	return 0;
}
