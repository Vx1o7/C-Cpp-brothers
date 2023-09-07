#include <stdio.h>

extern int x, y;
extern char ch;
void func22(void)
{
    x = y/10;
}

void func23(void)
{
    y = 10;
}