//Wap to interchange the First and Last element of array
#include<stdio.h>
int main()
{ int a[5]={11,12,13,14,15},i,c;
   for(i=0;i<1;i++)
   {
   	c=a[i+4];
   	a[i+4]=a[i];
   	a[i]=c;
   }
   for(i=0;i<5;i++)
   {
   	printf("%d ",a[i]);
   }
   
	return 0;
}
