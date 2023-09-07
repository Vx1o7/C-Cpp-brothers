#include <stdio.h>
#include <conio.h>

int main ()
{
    int n1, n2, n3, n4;
    float avg;

    printf("Give the numbers: ");
    scanf("%d", &n1);
    printf("Give the numbers: ");
    scanf("%d", &n2);
    printf("Give the numbers: ");
    scanf("%d", &n3);
    printf("Give the numbers: ");
    scanf("%d", &n4);

    avg = (n1 + n2+ n3 + n4)/4;
    printf("The average of the numbers is = %f", avg);

    return 0;
}