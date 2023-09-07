#include <stdio.h>
#include <conio.h>

int main ()
{
    char c;
    printf("Enter one character: ");
    c = getchar();
    printf("ASCII code of input character of %c is = %d\n",c, c);

    return 0;
}