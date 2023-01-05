/*     A
      BB
     CCC
    DDDD
   EEEEE 
   */
#include<stdio.h>
int main()
{
	int i;
	char j;
	int k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%c",'A'-1+i);
		}
		printf("\n");
	}
	return 0;
}
