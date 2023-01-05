//Create a structure and create two structure variable then assign values to first structute variable then copy all the value to 2nd structure then display 1st and 2nd structure value
#include<stdio.h>
struct student
{
 char name[20];
 int age;
 char course[20];
 	
};
struct student s={"Chandan",19,"BTech"};
struct student t; 
t.name[20]= s.name[20];
t.age = s.age;
t.course[20]= s.course[20];
int main()
{
	
	return 0;
}
