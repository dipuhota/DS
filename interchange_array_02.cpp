//Wap to interchange the largest and the smallest number in the array 
/*input ---> 10 2 30 4 50 78
output ---> 10 78 30 4 50 2 */
#include<stdio.h>
int main()
{
	int a[6]={10,2,30,4,50,78},i,min=a[0],max=a[0];
	for(i=0;i<6;i++)
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
	printf("min is %d\n ",min[i]);
	printf("max is %d\n ",max[i]);
	int c=min;
	min=max;
	max=c;
	for(i=0;i<=5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
