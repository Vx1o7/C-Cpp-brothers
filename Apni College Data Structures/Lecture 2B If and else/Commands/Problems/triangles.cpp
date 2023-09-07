#include<iostream>
using namespace std;

int main () {
    cout<<"Kindly enter the length of the sides of that traingle to determine its classification, below the line\n";

    int a,b,c;
    cin>>a>>b>>c;

    if (a==b && b==c)
    {
        cout<<"Congratulations! This is an equilateral triangle\n";
    }
    else if (a==b || b==c || c==a)
    {
        cout<<"This is an isoceles triangle. Better luck next time\n";
    }
    else
    {
        cout<<"Hard Luck. This is a scalene triangle\n";
    }
    return 0;
}