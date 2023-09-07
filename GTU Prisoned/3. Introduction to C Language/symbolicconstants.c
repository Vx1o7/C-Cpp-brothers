#include <stdio.h>
#include <conio.h>
#define PI 3.14

int main ()

{
    float rad = 5.0;
    float area, circum;

    area = PI *rad*rad;
    circum = 2* PI * rad;

    printf ("The area of the circle is %f", area);
    printf ("\nThe circumference of the circle is %f", circum);
    
    return 0;
}