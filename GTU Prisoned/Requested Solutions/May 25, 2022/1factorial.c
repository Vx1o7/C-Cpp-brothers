#include <stdio.h>

int main ()
{
    int n, i;
    int multi = 1;

    printf("Enter your lucky number: ");
    scanf("%d", &n);

    for ( i=1; i<=n; i = i+1)
    {
        multi = multi * i;
    }

    printf("The Factorial of given number is: %d", multi);

    return 0;
}