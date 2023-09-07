// https://www.codechef.com/problems/AGELIMIT

#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x, y, a;
        cin>>x>>y>>a;
        if (x<=a && y>a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}