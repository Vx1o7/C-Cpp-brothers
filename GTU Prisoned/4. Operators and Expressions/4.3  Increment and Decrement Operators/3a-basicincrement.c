#include <stdio.h>
#include <conio.h>

int main ()
{
    int x = 15, y;
    y = x++;

    printf("%d %d", ++y, x++);
    return 0;
}