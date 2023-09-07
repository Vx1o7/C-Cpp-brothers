#include <stdio.h>
#include <conio.h>

int main ()
{
    int n, i =0;
    printf("Give last even number: ");
    scanf("%d", &n);
    printf("Even numbers are  :\n");
    while (1)
    {
        if (i%2 ==1)
        {i++;
        continue;}

        if (i>n)
        {break;}
        printf("%d ", i);
        i++;
    }
    return 0;
}