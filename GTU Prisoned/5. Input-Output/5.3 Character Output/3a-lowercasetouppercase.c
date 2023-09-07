#include <stdio.h>
#include <conio.h>

int main ()
{
    char c;
    printf("Enter any one lowercase character: ");
    c = getchar();
    printf(" lowercase character: ");
    putchar(c);
    printf("Is now been converted into uppercase character = %c",c);
    putchar(c-32);
    return 0;
}