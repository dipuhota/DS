#include<stdio.h>
#include<string.h>
int main()
{
   char name[20];
   printf("Enter your name \n");
   gets(name);
   int i,nov=0;
   for(i=0;name[i]!='\0';i++)
   {
   	if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
   	{
   		nov++;
	   }
}
	printf("%d",nov);   	
	return 0;

}
