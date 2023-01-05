#include<stdio.h>
int Comb(int n,int r)
{
int i,j;
	int fact1=1,fact2=1;
	for(i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}
	for(i=1;i<=r;i++)
	{
		fact2=fact2*i;
	}
	int fact3=1;
	for(i=1;i<=(n-r);i++)
	{
		fact3=fact3*i;
	}
	printf("Factorial of n =%d\n",fact1);
	printf("Factorial of r =%d\n",fact2);
	printf("Factorial of n-r =%d\n",fact3);
	
	int C=fact1/(fact2*fact3);           //C(n,r)=n!/(n-r)!*r!
	return C;
	
}
int main()
{
 int Combination=Comb(10,6);
 printf("The combination is %d",Combination);	
	return 0;
}
