// Enter your insta id calculate number of digit,letters and symbol like Angel_cuty_Pie420
#include<stdio.h>
int main()
{
	char id[20]="Angel_cuty_Pie420";
	int i,nod,nol,nos;
	printf("Enter your insta id:\n");
	gets(id);
	for(i=0;id[i]!=0;i++)
	{
		if(id[i]>48 && id[i]<=57)
		{
			nod++;
		}
		else if(id[i]>='A'&&id[i]<='Z' || id[i]>='a'&&id[i]<='z')  // else if(isalpha(id[i])
		{
			nol++;
		}
		else
		{
			nos++;
		}
	}
	printf("The number of digits is %d \n",nod);
	printf("The number of letters is %d\n ",nol);
	printf("The number of symbols is %d \n",nos);
	return 0;
}
