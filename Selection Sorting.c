#include<stdio.h>
int main()
{
	int a[5]={30,50,20,10,40},i,j;
	printf("Before Sorting\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<4;i++)
	{
	for(j=i+1;j<5;j++)
	{
	 if(a[i]>a[j])
	 {
	 	int temp =a[i];
	 	a[i]=a[j];
	 	a[j]= temp;
	 }
   }	
 }
 printf("\nAfter Sorting\n");
 for(i=0;i<5;i++)
 {
 	printf("%d\t",a[i]);
 }
 return 0;
}
