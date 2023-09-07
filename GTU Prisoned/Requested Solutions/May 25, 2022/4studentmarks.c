#include <stdio.h>

int main ()
{
    int eng, math, sci, comp;
    float marks;

    printf("Kindly enter the marks in English Subject: ");
    scanf("%d", &eng);

    printf("Kindly enter the marks in Subject of Mathematics: ");
    scanf("%d", &math);

    printf("Kindly enter the marks in Science Subject: ");
    scanf("%d", &sci);

    printf("Kindly enter the marks in Subject Computer Studies: ");
    scanf("%d", &comp);

    marks = (eng + math + sci + comp) / 4;

    if (marks>=50)
    {printf("PASS");
    }

    else
    {printf("FAIL");
    }

    return 0;
}