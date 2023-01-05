#include<stdio.h>
int main()
{
	int i,a;
	for(i=1;i<6;i++)
	{
		for(a=1;a<=i;a++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
