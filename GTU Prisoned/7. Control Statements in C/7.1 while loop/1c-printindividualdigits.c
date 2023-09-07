#include <stdio.h>
#include <conio.h>

int main ()
{
    int n, i;
    printf("Give Integer Numbers:  ");
    scanf("%d", &n);
    while (n!=0)
    {
        i = n%10;
        printf("The digit is %d\n", i);
        n = n/10;
    }
    return 0;
}