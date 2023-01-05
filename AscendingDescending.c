//WAP to arrange an array in ascending or descending order
#include<stdio.h>
int main()
{
	
 int a[5]={34,55,67,12,78};
 int i,j;
 for(i=0;i<4;i++)
 {
 	for(j=0;j<4-i;j++)
 	{
 		if(a[j]>a[j+1])
 		{
 			int temp=a[j];
 			a[j]=a[j+1];
 			a[j+1]=temp;
		 }
	 }
	 }
	 printf("In Ascending order:\n");
	 for(i=0;i<5;i++)
	 {
	 	printf("%d ",a[i]);
		 }	
		 
     printf("\nIn Descending order:\n");
	 for(i=4;i>=0;i--)
	 {
	 	printf("%d ",a[i]);
		 }	
		 
	return 0;
}
