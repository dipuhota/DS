/* EEEEE
   DDDDD
   CCCCC
   BBBBB
   AAAAA
   */
#include<stdio.h>
int main()
{
	int i;
	char j;
	for(j='E';j>='A';j--)
	{
		for(i=0;i<5;i++)
		{
			printf("%c",j);
		}
		printf("\n");
	}	
	return 0;
}
