#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    char c;
    int blank = 0, newline=0, tab=0, other=0;

    printf("Give the string that can be multiline terminated by ^z\n");
    c = getchar();
    while (c!= EOF)
    {
        switch (c)
        {
        case ' ':
            blank++;
            break;

        case '\t':
            tab++;
            break;
        
        case '\n':
            newline++;
            break;
        
        default:
            other++;
        }
    c = getchar();
    }
   printf("Blanks = %d, Tabs = %d \n", blank, tab);
   printf("New Lines = %d, Others = %d \n", newline, other);
    
    
    return 0;
}