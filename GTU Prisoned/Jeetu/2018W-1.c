#include<stdio.h>

int main ()
{
    int num, a;
    printf("Enter you lucky number: ");
    scanf("%d", &num);

    a = num%10;

    if (a%2==0)
    {printf("Congrats! Given number is an even number.");}
    else
    {printf("Congrats! Given number is an odd number.");}
    return 0;
}