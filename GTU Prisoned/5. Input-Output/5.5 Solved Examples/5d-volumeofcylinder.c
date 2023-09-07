#include <stdio.h>
#include <conio.h>
#define pi 3.1415

int main ()
{
    int r, h;
    float v;
    printf("Give radius of the cylinder: ");
    scanf("%d", &r);
    printf("Give height of the cylinder: ");
    scanf("%d", &h);
    v = pi * r* r* h;
    printf("Volume of cylinder =  %f", v);    
    
    return 0;
}