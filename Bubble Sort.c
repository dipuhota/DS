#include<stdio.h>
int main()
{ int a[5]={5,4,1,3,2},i,j,temp;
    printf("BEFORE SORTING\n");
   for(i=0;i<5;i++)
   {
   	printf("%d\t",a[i]);
   }
   for(i=0;i<4;i++)
   {
   	for(j=0;j<4-i;j++)
   	{
   		if (a[j]>a[j+1])
   		{
   			temp=a[j];
   			a[j]=a[j+1];
			a[j+1]=temp;
          }
	   }
   }
   printf("\nAFTER SORTING\n");
   for(i=0;i<5;i++)
   {
   	printf("%d\t",a[i]);
   }
	return 0;
}
