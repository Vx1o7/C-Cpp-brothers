#include <iostream>
using namespace std;

int main () {

    int n1,n2;
    cout<<"Enter the two numbers below\n";
    cin>>n1>>n2;

    char op;
    cout<<"Command the basic operation\n";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2;
        break;

    case '-':
        cout<<n1-n2;
        break;
    
    case '/':
        cout<<n1/n2;
        break;

    case '*':
        cout<<n1*n2;
        break;

    default:
    cout<<"Kindl enter a simple and basic operation";
        break;
    }


    return 0;
}