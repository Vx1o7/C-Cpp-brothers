#include <iostream>
using namespace std;

int main () {

    int a, b;
    cout<<"Enter those two numbers\n";
    cin>>a>>b;

    for (int num=a; num<=b; num++)
    {
        int x;
        for (x=2; x<=num;x++)
        {
            if (num%x==0)
            { break; }
        }
        if (x==num)
        {
            cout<<num<<endl;
        }
    }


    return 0;
}