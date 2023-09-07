#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
   int l, b;
   int area, peri;
   float d;

   printf("Give length and width of rectangle\n");
   scanf("%d %d", &l, &b);
   area = l*b;
   peri = 2*l + 2*b;
   d = sqrt (l*l + b*b);
   printf("Area = %d Perimeter = %d Diagonal Length = %f\n", area, peri, d);
   return 0;
}