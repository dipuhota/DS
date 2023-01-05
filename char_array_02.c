// input Surendra and search whether r is present or not 
#include<stdio.h>
int main()
{
	char ch[9]="Surendra";
	char key='r';
	int found=0,i;
	for(i=0;i<9;i++)
	{
		if(ch[i]==key)
		{
			found++;
			break;
		}
	}
	if(found==1)
	{
		printf("Key found");
	}
	else
	{
		printf("Key not found");
	}
	
		return 0;
}
