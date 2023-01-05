//WAP using structure to enter two pointer and then you have to calculate the distance between them
#include<stdio.h>
#include<math.h>
struct distance
{
	int x1,x2,y1,y2;
};
int main()
{
    struct distance d;
	struct distance *p=&d;
	p->x1=5;
	p->x2=6;
	p->y1=1;
	p->y2=3;
	float distance=sqrt((p->x2-p->x1)*(p->x2-p->x1)+(p->y2-p->y1)*(p->y2-p->y1));
	printf("The distance between a and b is %f",distance);	
	return 0;
}
