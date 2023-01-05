// input---> aabbccddeeffgg
//exptd----> a b c d e f g
#include<stdio.h>
int main()
{
	char ch[15]="aabbccddeeffgg";
	int i,j;
	for(i=0;i<15;i++)
	{
		for(j=i+1;j<15;j++)
		{
			if(ch[i]==ch[j])
			{
				printf("%c ",ch[i]);
			}
		}
	}
	return 0;
}
