#include <stdio.h>
#include <conio.h>

int main ()
{
    int a, b;
    float p, q;
    double x, y;

    printf("Enter two integer numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d %d", a, b);
    
    printf("Enter two float numbers: ");
    scanf("%f %f", &p, &q);
    printf("%f %f", p, q);

    printf("Enter two double numbers: ");
    scanf("%lf %lf", &x, &y);
    printf("%lf %lf", x, y);
    return 0;
}