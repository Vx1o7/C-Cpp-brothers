#include<iostream>
using namespace std;

int main () {

    cout<<"Kindly enter the number below\n";
    int a;
    cin>>a;

    if (a%2==0)
    {
        cout<<"Congratulations! Its an even number\n";
    }
    else
    {
        cout<<"Hard Luck. Its an odd number\n";
    }
    return 0;
}