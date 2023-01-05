/*Wap to merge two unsorted arrays
input a[5] --> 10 20 2 45 21
 b[5] --> 20 50 21 4 23 25 36
output --->10 20 2 45 21 20 50 21 4 23 25 36*/
#include<stdio.h>
int main()
{
	int a[5]={10,20,2,45,21},b[7]={20,50,21,4,23,25,36},c[12],i;
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
	}
	for(i=5;i<12;i++)
	{
		a[i]=b[i];
	}
	for(i=0;i<12;i++)
	{
			printf("%d",c[i]);
	}

	return 0;
}
