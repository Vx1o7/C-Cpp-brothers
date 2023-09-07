#include <iostream>
using namespace std;

int main ()
{
    cout<<"Kindly enter your lucky number\n";
    int a;
    cin>>a;

    for (int i=1; i<=a; i++)
    {
        for (int j=1; j<=a+1-i; j++)
        { cout<<j<<" "; }
        cout<<endl;
    }

    return 0;
}