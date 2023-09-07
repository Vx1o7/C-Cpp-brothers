#include <stdio.h>
#include <conio.h>

int main ()
{
    int a;
    printf("State the value of a in numerals: ");
    scanf("%d", &a);
    
    a += 5;
    printf("a = %d\n", a);

    a -= 5;
    printf("a = %d\n", a);

    a *= 5;
    printf("a = %d\n", a);

    a %= 5;
    printf("a = %d", a);

    return 0;
}