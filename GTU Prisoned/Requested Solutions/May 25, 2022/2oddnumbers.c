#include <stdio.h>

int main ()
{
    int n, i;
    int sum = 0;

    printf("Enter your lucky number: ");
    scanf("%d", &n);

    printf("The Sum of\n");

    for (i=1; i<=n;i++)
    {
        if (i%2!=0)
        {
        sum = sum +i;
        printf ("%d +", i);
        }
    }
    printf ("\nis = %d", sum);

    return 0;
}