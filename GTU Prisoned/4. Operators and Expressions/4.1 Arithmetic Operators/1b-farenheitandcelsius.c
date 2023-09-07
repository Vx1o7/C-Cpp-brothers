#include <stdio.h>
#include <conio.h>
int main ()
{
    float fahr, cel;

    printf("Submit the temperature value in Celsius: ");
    scanf("%f", &cel);
    fahr = (9*cel/5) + 32;

    printf("Fahrenheit temperature = %f\n", fahr);
    printf("Celsius temperature = %f\n", cel);
    return 0;
}