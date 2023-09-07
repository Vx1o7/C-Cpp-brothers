#include <stdio.h>
#include <conio.h>

int main ()
{
    int x, y;

    x = 5;
    y = 3;
    printf("before operations x = %d and y = %d\n", x, y);

    x = x+y;
    y = y-x;
    x = x-y;
    printf("after operations x = %d and y = %d\n", x, y);

    return 0;
}