#include<stdio.h>
#include<math.h>
int main()
{ float area;
int a=2,b=3,c=5;
float s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%.2f",area);
return 0;
}
