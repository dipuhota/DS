#include<stdio.h>
double f(double x)
{
	return x*x;
}
int main()
{
	int a=1,b=10;
	int n,i;
	double h,x,sum,result;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	h=(b-a)/2;
	for(i=1;i<n;i++)
	{
	 x=a+i*h;
	 sum=sum+f(x);
	}
	result=(h/2)*(f(a)+2*sum+f(b));
	printf("%lf",result);
	
	return 0;
}
