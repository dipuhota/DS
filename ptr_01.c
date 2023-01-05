#include<stdio.h>
int main()
{
	int a=23;
	int *p;
	p=&a;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%d\n",p);
	printf("%u\n",&p);
	printf("%u\n",*p);
	return 0;
}
