#include <stdio.h>
#include <conio.h>

int main ()
{
    char c1, c2;
    printf("Enter the first character: ");
    c1 = getch();
    printf("Enter the second character: ");
    c2 = getch();
    printf("The first character is %c and the second one is %c",c1, c2);

    return 0;
}