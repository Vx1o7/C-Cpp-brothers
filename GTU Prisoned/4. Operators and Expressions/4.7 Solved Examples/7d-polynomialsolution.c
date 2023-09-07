/*3x^3 - 4x* + 9*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
   float x, ans = 0;

   printf("Give value of x\n");
   scanf("%f", &x);

   ans = ans + 3*x*x*x;
   ans = ans - 4*x;
   ans = ans + 9;

   printf("Value of Polynomial is %f\n", ans);
   return 0;
}