#include <stdio.h>

int main ()
{
    int t;

    scanf("%d%*c", &t);
    if (t==1)
    {
        char s[80];
        printf("Enter something: ");
        gets(s);
    }
    return 0;
}