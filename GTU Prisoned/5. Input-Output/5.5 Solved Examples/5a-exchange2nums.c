#include <stdio.h>
#include <conio.h>

int main ()
{
    int x, y, temp;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("before operations x = %d and y = %d\n", x, y);

    temp =x;
    x = y;
    y = temp;
    printf("after operations x = %d and y = %d\n", x, y);

    return 0;
}