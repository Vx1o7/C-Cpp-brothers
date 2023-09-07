#include <iostream>
using namespace std;

int main () {

    int a,b;
    cout<<"Enter the two numbers below\n";
    cin>>a>>b;

    char h;
    cout<<"Command the basic operation\n";
    cin>>h;

    switch (h)
    {
    case '+':
        cout<<a+b;
        break;

    case '-':
        cout<<a-b;
        break;
    
    case '/':
        cout<<a/b;
        break;

    case '*':
        cout<<a*b;
        break;

    default:
    cout<<"Enter the basic operator, we can do simple math, and not asked to do integrate";
        break;
    }


    return 0;
}