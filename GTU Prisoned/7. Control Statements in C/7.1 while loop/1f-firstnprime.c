#include <stdio.h>
#include <conio.h>

int main ()
{
    int num, i = 2;

    printf("Enter your lucky number:");
    scanf("%d", &num);

    while (i<=num/2)
    {
        if (num%i==0)
        {printf("The number %d is a prime number", i);}
        i++;
    }
    return 0;
}