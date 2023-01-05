#include<stdio.h>
int main()
{int a[5]={3,4,5,6,7},i;
printf("The original array is:\n");
for(i=0;i<5;i++)
{
printf("%d ",a[i]);	
}
printf("\nThe reversed array is:\n");
for(i=4;i>=0;i--)
{
	printf("%d ",a[i]);
}
	return 0;
}
