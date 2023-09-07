#include <stdio.h>
#include <conio.h>

int main ()
{
    int num, n, i, sum=0;

    printf("Enter your integer here: ");
    scanf("%d", num);
    n = num;
    while (num!=0)
    {
        i = num%10;
        sum = sum + i*i*i;
        num = num/10;
    }
    
    if (sum == n)
    {printf("Congratulations! The given number is an armstrong.");}
    else
    {printf("Better luck next time.");}

    return 0;
}