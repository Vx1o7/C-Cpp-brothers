#include <iostream>
using namespace std;

int main ()
{
    int tests;
    cin>>tests;
    for (int t = tests; t >0; t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if (a + b +c ==180)
        {cout<<"YES\n";}
        else
        {cout<<"NO\n";}
    }
    return 0;
}