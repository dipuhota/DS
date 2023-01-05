//Wap to interchange the largest and the smallest number in the array 
/*input ---> 10 2 30 4 50 78
output ---> 10 78 30 4 50 2*/
#include<stdio.h>
int main()
{
	int a[6]={10,2,30,4,50,78},max,min,maxpos,minpos,i,j;
	max=a[0];
	min=a[0];
	maxpos=0;
	minpos=0;
	for(i=1;i<6;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxpos=i;
		}
		else if(a[i]<min)
		{
			min=a[i];
			minpos=i;
		}
	}
	j=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=j;
	printf("So the array is:\n ");
	for(i=0;i<6;i++)
	{
	
		printf("%d ",a[i]);
	}
	return 0;
}
