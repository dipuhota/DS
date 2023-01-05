//Wap to count the number of positive and negative elements in array
#include<stdio.h>
int main()
{
 int a[9]={1,2,-3,4,-5,-6,8,-7,-9},i,pos=0,neg=0;
for(i=0;i<9;i++)
{
	if(a[i]>0)
	{
		pos++;
	}
	else if(a[i]<0)
	{
	neg++;
    }
}
printf("The number of positive elements is:%d\n",pos);
printf("The number of negative elements is:%d",neg);
return 0;
}
