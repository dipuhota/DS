//Wap to copy all elements of one array to another
#include<stdio.h>
int main()
{int a[8]={1,2,3,4,5,6,7,8},b[8],i;
   for(i=0;i<8;i++)
   {
   	b[i]=a[i];
   }
   for(i=0;i<8;i++)
   {
   	printf("%d ",b[i]);
   }
	return 0;
}
