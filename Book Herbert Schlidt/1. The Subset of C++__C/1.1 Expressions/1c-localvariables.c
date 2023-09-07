#include <stdio.h>

void func(void);

int main ()
{
    int i;
    for (i=0; i<10; i++)
      func();
    

return 0;
}

void func(void)
{
    int j = 10;
    printf("%d n", j);
    j++;
}