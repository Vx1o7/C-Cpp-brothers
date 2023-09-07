#include <stdio.h>
int main ()
{
    int num, temp, a, sum = 0;

    printf("Enter you lucky number here: ");
    scanf("%d", &num);

    temp = num;
    do
    {
        a = temp %10;
        sum = sum +a*a*a;
        temp = temp/10;
    } while (temp != 0);
    if (sum == num)
    {
        printf("Congrats! This is an Armstrong Number!");
    }
    
    return 0;
}