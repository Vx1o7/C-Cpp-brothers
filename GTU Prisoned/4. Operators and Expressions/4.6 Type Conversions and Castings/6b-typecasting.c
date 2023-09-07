#include <stdio.h>
#include <conio.h>

int main ()
{
    int sum = 47;
    int n = 10;
    float avg;

    avg = sum/n;
    printf("avg = sum/n = %f\n", avg);
    avg = (float)sum/n;
    printf("avg = (float)sum/n = %f\n", avg);
    avg = (float)(sum/n);
    printf("avg = (float)(sum/n) = %f\n", avg);
    return 0;
}