#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    int n;
    float sum = 1.0;
    int i = 2;

    printf("How much bucks do you have?: ");
    scanf("%d", &n);
    while (i<=n)
    {
        sum = sum - pow(-1,i);
        i++;
        /*pow(x,y) caculates x^y*/
    }
    printf("Summation of the given series = %f", sum);
    

    return 0;
}