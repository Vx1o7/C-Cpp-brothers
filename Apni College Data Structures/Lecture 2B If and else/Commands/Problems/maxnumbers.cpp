#include<iostream>
using namespace std;

int main () {
    cout<<"Kindly enter the numbers here to find greatest number among the below ones:\n";

    int a,b,c;
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is the greatest number\n";
        }
        else
        {
            cout<<c<<" is the greatest number\n";
        }
    }
    else
    {
        if (b>c)
        {
             cout<<b<<" is the greatest number\n";
        }
        else
        {
             cout<<c<<" is the greatest number\n";
        }
    }
    return 0;
}