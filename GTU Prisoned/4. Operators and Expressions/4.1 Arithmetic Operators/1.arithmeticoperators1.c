#include <stdio.h>

int main ()
{
    int x = 15;
    int y = 7;

    printf("%d + %d = %d" ,x, y, x+y);
    printf("\n%d - %d = %d" ,x, y, x-y);
    printf("\n%d * %d = %d", x, y, x*y);
    printf("\n%d / %d = %d", x, y, x/y);
    printf("\n%d %% %d = %d", x, y, x%y);

    return 0;
}