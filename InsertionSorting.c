#include<stdio.h>
int main()
{
	int a[5]={4,2,1,5,3},i,j,temp;
	for(i=1;i<5;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	printf("AFTER SORTING\n");
for(i=0;i<5;i++)
{
	printf("%d\t",a[i]);
}
	return 0;
}
