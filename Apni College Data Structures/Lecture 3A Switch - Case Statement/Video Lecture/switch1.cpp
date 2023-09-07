#include <iostream>
using namespace std;

int main () {

    char button;
    cout<<"Enter the alphabet here\n";
    cin>>button;

    if (button=='a')
    { cout<<"This is Windows 10.1\n"; }
    else if (button=='b')
    { cout<<"This PC is also upgradable for WIndows 11\n"; }
    else if (button=='c')
    { cout<<"So definitely it can run Windows 7\n"; }
    else if (button=='d')
    { cout<<"But we dont know whether will it run Windows 12 or not\n"; }
    else if (button=='e')
    { cout<<"For more updates we will contact soon\n"; }
    else
    { cout<<"Wrong code. Please try it again\n"; }

    return 0;
}