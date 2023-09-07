#include <stdio.h>
#include <conio.h>

int main ()
{
    char c1, c2;
    printf("Enter the first character: ");
    c1 = getche();
    printf("Enter the second character: ");
    c2 = getche();
    printf("The first character is %c and the second one is %c",c1, c2);

    return 0;
}