#include <stdio.h>

int main (void)
{
    extern int first, last;  // instead of that we can use global variables

    printf("%d %d", first, last);
    return 0;
}

/*declaring global vars in the end*/
int first = 10, last = 15;