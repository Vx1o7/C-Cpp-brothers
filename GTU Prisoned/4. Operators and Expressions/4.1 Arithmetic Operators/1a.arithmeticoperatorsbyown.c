#include <stdio.h>

int main ()
{
    int x, y;

    printf("Enter your first number: ");
    scanf("%d", &x);

    printf("Enter your second number: ");
    scanf("%d", &y);

    printf("%d + %d = %d" ,x, y, x+y);
    printf("\n%d - %d = %d" ,x, y, x-y);
    printf("\n%d * %d = %d", x, y, x*y);
    printf("\n%d / %d = %d", x, y, x/y);
    printf("\n%d %% %d = %d", x, y, x%y);

    return 0;
}