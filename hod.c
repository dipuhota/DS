#include<stdio.h>
int main()
{
	float n=4,fact=1,ans=0;
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		ans=ans+(i/(fact*(i+1)));
	}
	printf("%f",ans);
	return 0;
}
