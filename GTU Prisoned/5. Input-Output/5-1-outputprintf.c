#include <stdio.h>
#include <conio.h>

int main ()
{
    int p, n;
    float r, i;

    printf("Please give the principal amount: ");
    scanf("%d", &p);
    printf("Please give the rate of interest: ");
    scanf("%f", &r);
    printf("Please give number of years: ");
    scanf("%d", &n);
    i = (p*r*n)/100;
    printf("Interest amount of %d at the rate of %F%% for %d years is = %f\n", p, r, n, i);
    
    return 0;
}