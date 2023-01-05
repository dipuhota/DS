//WAP using structure take input a student details information and display it
#include<stdio.h>
#include<string.h>
struct student
{
int roll;
char name[20];
char course[10];	
};
int main()
{
	struct student obj;
	printf("Enter Roll No.\n");
	scanf("%d",&obj.roll);
	printf("Enter Name\n");
	fflush(stdin);
	gets(obj.name);
	printf("Enter Course\n");
	gets(obj.course);
	printf("Roll Number is %d\n",obj.roll);
	printf("Name is %s\n",obj.name);
	printf("Course is %s\n",obj.course);
	return 0;	
}
