#include <stdio.h>
#include <conio.h>
#include <math.h>


int main ()
{
    int a, b, c;
    double area, s;
    printf("Enter the first side length of the triangle: ");
    scanf("%d", &a);
    printf("Enter the second side length of the triangle: ");
    scanf("%d", &b);
    printf("Enter the third side length of the triangle: ");
    scanf("%d", &c);

    s = (a+b+c)/2;
    area = sqrt (a*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle = %lf\n", area);   
    
    return 0;
}