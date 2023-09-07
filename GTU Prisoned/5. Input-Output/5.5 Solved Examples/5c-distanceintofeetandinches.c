#include <stdio.h>
#include <conio.h>

int main ()
{
    float feet, inch, cm;
    printf("Give distance in feet and inches: ");
    scanf("%f %f", &feet, &inch);
    cm  = feet * 30 + inch*2.5; 
    printf("DIstance is %f feet anf %f inches\n", feet, inch);
    printf("COrresponding distance in cm is %f", cm);    
    
    return 0;
}