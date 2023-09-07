#include <stdio.h>

int main ()
{
    int phy, math, chem, bio;
    float marks;

    printf("Kindly enter the marks for Physics: ");
    scanf("%d", &phy);

    printf("Kindly enter the marks in Subject of Mathematics: ");
    scanf("%d", &math);

    printf("Kindly enter the marks in Chemistry: ");
    scanf("%d", &chem);

    printf("Kindly enter the marks in Biology: ");
    scanf("%d", &bio);

    if (phy >= 100 || math >=100 || chem >=100 || bio >= 100)
    {printf("Invalid Marks Input. Please enter your marks correctly");
    }

    marks = (phy + math + chem + bio) / 4;

    printf ("Your percentage in the entrance test is %d\n", marks);

    if (marks >= 80)
    { printf("EXCELLENT"); }

    else if (marks >= 70)
    { printf("DISTINCTION"); }

    else if (marks >= 60)
    { printf("ELIGIBLE"); }

    else
    { printf("INELIGIBLE"); }


    return 0;
}