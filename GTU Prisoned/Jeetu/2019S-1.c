#include <stdio.h>
int main ()
{
    int num;
    float sum = 0;

    printf("Enter your lucky number here: ");
    scanf("%d", &num);

    for (int i = 1; i<=num; i++)
    {
        sum = sum + (1/i);
        if (i == 1)
            printf("\n 1 +");
        else if (i == num)
            printf(" (1 / %d)", i);
        else
            printf(" (1 / %d) + ", i);
    }
    printf("Function answer is %f", sum);

    return 0;
}