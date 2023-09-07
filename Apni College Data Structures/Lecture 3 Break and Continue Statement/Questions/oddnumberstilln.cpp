#include <iostream>
using namespace std;

int main () {

    int a;
    cout<<"Enter your lucky number\n";
    cin>>a;

    for (int i=1; i<=a; i++)
    {
        if (i%2==0)
        { continue; }

        cout<<i<<endl;
    }

    return 0;
}