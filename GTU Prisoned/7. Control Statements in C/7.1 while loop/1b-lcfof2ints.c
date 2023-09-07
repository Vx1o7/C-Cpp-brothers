#include <stdio.h>
#include <conio.h>

int main ()
{
    int a, b, m, i = 1;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    m=a;

    while (m%b!=0)
    {
        i++;
        m = a*i;
    }
    printf("LCM of %d and %d is %d", a, b, m);
    
    return 0;
}