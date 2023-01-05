/* AAAAA
   BBBB
   CCC
   DD
   E
   */
#include<stdio.h>
int main()
{
	int i;
	char j;
	for(i=5;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",'A'-i+5);
		}
		printf("\n");
	}
	return 0;
}
