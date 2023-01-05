/* AAAAA
   BBBBB
   CCCCC
   DDDDD
   EEEEE
   */
#include<stdio.h>
int main()
{
	int i;
	char c;
	for(c='A';c<='E';c++)
	{
	for(i=0;i<5;i++)
	{
	printf("%c",c);
	}
	printf("\n");
	}
	return 0;
}
