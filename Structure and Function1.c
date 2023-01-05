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

void details(struct Student st)
{
printf("%s %s %d %d %d",st.name,st.address,st.age,st.roll,st.mark);	
}
int main()
{
  struct Student s={"Chandan","Arjunjhari",19,119,490};	
  details(s);
	return 0;
}
