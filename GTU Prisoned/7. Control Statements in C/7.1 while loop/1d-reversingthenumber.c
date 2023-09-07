#include <stdio.h>
#include <conio.h>

int main ()
{
    int num;
    int i;

    printf("Give your integer number: ");
    scanf("%d", &num);
    while (num!=0)
    {
        i = num%10;
        printf("%d", i);
        num = num/10;
    }
    
    return 0;
}