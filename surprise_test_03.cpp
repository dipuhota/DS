#include<stdio.h>
int main()
{int a[4]={10,20,30,40},b[4]={50,60,70,80},c[8],i;
for(i=0;i<8;i++)
{
if(	c[i]%2==0)
{
	c[i]=a[i];
}
else
{
	c[i]=b[i];
}
}
for(i=0;i<8;i++)
{
	printf("%d ",c[i]);
}
	return 0;
}
