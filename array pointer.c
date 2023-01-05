#include<stdio.h>
#include<string.h>
 typedef struct  employee
{
	int eid;
	char ename[20];
	int esal;
}emp;
emp e[5];
int main()
{
	int i;
	for( i=0;i<5;i++)
	{
		printf("***** %d Employee Details *****\n",i++);
		printf("Enter Employee Id\n");
		scanf("%d",&e[i].eid);
		printf("Enter Employee Name\n");
		fflush(stdin);
		gets(e[i].ename);
		printf("Enter Employee Salary\n");
		scanf("%d",e[i].esal);
		printf("%d Id=%d",i,e[i].eid);
		printf("%d Name=%s",i,e[i].ename);
		printf("%d Salary=%d",i,e[i].esal);
	}
	
	return 0;
	
}
