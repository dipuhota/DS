//Let us consider there are two list of numbers WAP to merge the two list and sorting the new list in increasing order

#include<stdio.h>
int main()
{
	int a[5]={7,6,3,9,5},b[5]={78,94,34,23,11},c[10];
	int i,j=0;
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
	}
	for(i=5;i<10;i++)
	{
		c[i]=b[j];
		j++;
	}
printf("Before Sorting\n");
for(i=0;i<10;i++)
{
	printf("%d ",c[i]);
}
 c[10];	
	for(i=0;i<10;i++)
	{
	 for(j=i+1;j<10;j++)
	 {
	 	if(c[i]>c[j])
	 	{
	 	int	temp=c[i];
	 		c[i]=c[j];
	 		c[j]=temp;
		 }
		 }	
	}
	
	
	printf("\nAfter sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
