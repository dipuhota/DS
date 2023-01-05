#include<stdio.h>
void main()
{
	
	float avg;
	int std[10],sum=0,i;
	
	printf("Enter 10 Students age\n");
	for(i=0;i<10;i++)
	{
		scanf("%d ",&std[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+std[i];
	}
	avg=sum/10;
	printf("Average of the students age=%f \n",avg);
}
