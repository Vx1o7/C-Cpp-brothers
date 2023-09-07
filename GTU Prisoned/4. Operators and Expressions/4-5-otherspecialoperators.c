#include <stdio.h>
#include <conio.h>

int main ()
{
    int x, z;
    z = (x = 5, x*5);
    printf("x = %d", x);
    printf("z = %d", z);
    return 0;
}