#include<iostream>
using namespace std;

int main () {

    cout<<"Kindly enter two numbers to determine the maximum and minimum between both\n";

    int a,b;
    cin>>a>>b;

    if (a>b)
    {
        cout<<a<<" is the Maximum\n";
        cout<<"and"<<b<<"is the Minimum\n";
    }
    else
    {
        cout<<b<<" is the Maximum\n";
        cout<<"and"<<a<<" is the Minimum\n";
    }

    return 0;
}