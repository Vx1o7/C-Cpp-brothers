#include <stdio.h>
#include <conio.h>

int main ()
{
    char c1, c2;
    printf("Enter the first character: ");
    scanf("%c", &c1);
    fflush(stdin);
    printf("Enter the second character: ");
    scanf("%c", &c2);
    printf("The first character is %c and the second one is %c",c1, c2);

    return 0;
}