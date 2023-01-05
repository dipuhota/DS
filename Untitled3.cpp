#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, s, Area;
  
  printf("\nPlease! Enter First edge of the triangle: ");
  scanf("%f",&a);
  printf("\nPlease! Enter Second edge of the triangle: ");
  scanf("%f",&b);
  printf("\nPlease! Enter Third edge of the triangle: ");
  scanf("%f",&c);  

  s = (a + b + c)/2;
  Area = sqrt(s * (s - a) * (s - b) * (s - c));

  printf(" Area of the triangle = %.2f\n",Area);

  return 0;
}
