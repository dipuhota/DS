/*  EEEEE
    DDDD
    CCC
    BB
    A
    */
#include<stdio.h>
int main()
{
	int i;
	char j;
	for(i=5;i>0;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",'E'-5+i);
		}
		printf("\n");
	}
	return 0;
}
