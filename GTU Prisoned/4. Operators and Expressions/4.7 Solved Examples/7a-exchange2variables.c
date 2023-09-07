#include <stdio.h>
#include <conio.h>

int main ()
{
    int x, y, temp;

    x = 5;
    y = 3;
    printf("before operations x = %d and y = %d\n", x, y);

    temp =x;
    x = y;
    y = temp;
    printf("after operations x = %d and y = %d\n", x, y);

    return 0;
}