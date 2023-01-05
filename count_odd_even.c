//Wap to count even and odd elements in array
#include<stdio.h>
int main()
{
int a[7]={1,2,3,4,5,6,7},i;
int odd=0,even=0;
for(i=0;i<7;i++)
{
if(a[i]%2==0)
{
even++;
}
else 
{
odd++;
}
}
printf("The number of odd number is:%d\n",odd);
printf("The number of even number is:%d\n",even);
return 0;

}
