#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    int n, num1, num2, num3;
    int count=2;

    num1=0;
    num2=1;
    printf("How many Prime Numbers?:  ");
    scanf("%d", &n);

    if( n>2)
    {
        printf("The numbers are: ");
        printf("%d \n  %d\n", num1, num2);
        while(count<n)
        {
            num3 = num1 +num2;
            printf("%d\n", num3);
            num1 = num2;
            num2 = num3;
            count++;
        }
    }

    return 0;
}