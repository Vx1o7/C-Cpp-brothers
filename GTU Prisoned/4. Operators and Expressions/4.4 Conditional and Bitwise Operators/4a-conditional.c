#include <stdio.h>
#include <conio.h>

int main ()
{
    int x, y, max, min;

    printf("Give the first lucky number: ");
    scanf("%d", &x);

    printf("Give the second lucky number: ");
    scanf("%d", &y);

    max = (x>y)? x:y;
    min = (x<y)? x:y;

    printf("Maximum of x and y is: %d\n", max);
    printf("Minimum of x and y is: %d", min);
    return 0;
}