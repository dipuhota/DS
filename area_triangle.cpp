#include<stdio.h>
#include<math.h>
void triangle(float a,float b,float c)
{
	double area,s;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle is %lf",area);
}
int main()
{
triangle(2,3,4);
	return 0;
}
