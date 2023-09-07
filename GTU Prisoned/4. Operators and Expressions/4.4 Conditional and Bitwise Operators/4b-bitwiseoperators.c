#include <stdio.h>
#include <conio.h>

int main ()
{
    int x;
    int mul, div;

    printf("Give one integer to forward this command: ");
    scanf("%d", &x);

    mul = x << 1;
    div = x >> 1;

    printf("%d * 2 = %d\n", x, mul);
    printf("%d / 2 = %d", x, div);
    return 0;
}