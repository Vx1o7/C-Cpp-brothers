#include <stdio.h>
#include <conio.h>

int main ()
{
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("Decimal Number  = %d\n", x);
    printf("Hexadecimal Number  = %x\n", x);
    printf("Octal Number  = %c\n", x);


   
    return 0;
}