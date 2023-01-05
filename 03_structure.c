//WAP using structure take input a student details information and display it using nested structure
#include<stdio.h>
struct student
{
 int roll;
 char name[20];
  struct course
  {
  	char branch[10];
	  }c;	
};
int main()
{
 	struct student s;
 	printf("Enter Roll No.\n");
 	scanf("%d",&s.roll);
 	printf("Enter Name\n");
 	fflush(stdin);
 	gets(s.name);
 	printf("Enter Branch\n");
 	gets(s.c.branch);
 	//display
 	printf("Roll No. is %d\n",s.roll);
 	printf("Name is %s\n",s.name);
 	printf("Branch is %s\n",s.c.branch);
 	
	return 0;
}
