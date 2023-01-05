#include<stdio.h>
int fun(int n)
{
	int result;
	if(n>10)
	{
		result=0;
	}
	else
	{
		result= n+fun(n+1);
	}
	return result;
}
int main()
{
	int n=1,result;
	result=fun(n);
	printf("the sum is %d",result);
	return 0;
	
}
