#include <iostream>
using namespace std;

int main ()
{
    int marks;
    cout<<"Enter your score to get the grades: ";
    cin>>marks;

    if (marks > 92 && marks <=100)
    {cout<<"Grade A1";}
    else if (marks > 85 && marks <=92)
    {cout<<"Grade A2";}
    else if (marks > 75 && marks <= 85)
    {cout<<"Grade B1";}
    else if (marks > 67 && marks<=75)
    {cout<<"Grade B2";}
    else if (marks > 60 && marks<=67)
    {cout<<"Grade C1";}
    else if (marks > 50 && marks<=60)
    {cout<<"Grade C2";}
    else if (marks > 34 && marks<=50)
    {cout<<"Grade D: Pass";}
    else if (marks<=34 && marks >=0)
    {cout<<"Grade F: Fail";}
    else
    {cout<<"Wrong input";}
    
    return 0;
}