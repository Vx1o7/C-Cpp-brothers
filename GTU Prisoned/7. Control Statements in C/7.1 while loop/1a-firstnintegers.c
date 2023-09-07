#include <stdio.h>
#include <conio.h>

int main ()
{
    int n, sum = 0;
    int i =1;
    printf("Enter your integer: ");
    scanf("%d", &n);

    while (i<=n)
    {
        sum = sum + i;
        i++;
    }

    printf("The sum of %d numbers= %d", n, sum);

    return 0;
}