// Structure and Function
#include<stdio.h>
#include<string.h>
struct Student
{
 char name[10];
 char address[20];
 int age;
 int roll;
 int mark;	
};

void details(struct Student *ptr)
{
printf("%s %s %d %d %d",ptr->name,ptr->address,ptr->age,ptr->roll,ptr->mark);	
}
int main()
{
  struct Student s={"Chandan","Arjunjhari",19,119,490};	
  details(&s);
	return 0;
}
