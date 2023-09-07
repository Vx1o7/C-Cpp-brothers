//https://www.codechef.com/SVIT2FPP02/problems/COCONUT
#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a1, b1;
        int a2, b2;
        cin>>a1>>b1>>a2>>b2;
        int c = (a2/a1) + (b2/b1);
        cout<<c<<endl;
    }
    return 0;
}