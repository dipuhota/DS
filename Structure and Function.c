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

void details(char name[],char address[],int age,int roll,int mark)
{
printf("%s %s %d %d %d",name,address,age,roll,mark);	
}
int main()
{
  struct Student s={"Chandan","Arjunjhari",19,119,490};	
  details(s.name,s.address,s.age,s.roll,s.mark);
	return 0;
}
