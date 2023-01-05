#include<stdio.h>
int Permu(int n,int r)
{
int i,j;
	int fact1=1;
	for(i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}

	int fact2=1;
	for(i=1;i<=(n-r);i++)
	{
		fact2=fact2*i;
	}
	printf("Factorial of n =%d\n",fact1);
	printf("Factorial of n-r =%d\n",fact2);
	
	int P=fact1/fact2;           //P(n,r)=n!/(n-r)!
	return P;
	
}
int main()
{
 int Permutation=Permu(2,2);
 printf("The permutation is %d",Permutation);	
	return 0;
}
