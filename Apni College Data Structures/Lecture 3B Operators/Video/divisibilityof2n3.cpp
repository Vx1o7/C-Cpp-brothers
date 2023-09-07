#include <iostream>
using namespace std;

int main () {

    cout<<"Priya Grahak, Nimnlikhit vakya ke niche apna sankhya daalein\n";
    int n;
    cin>>n;

    if(n%2==0 && n%3==0)
    { cout<<"This number is divisible by both 2 and 3\n"; }

    else if(n%2==0)
    { cout<<"This number is divisible by 2 only\n"; }

    else if(n%3==0)
    { cout<<"This number is divisible by 3 only\n"; }

    else
    { cout<<"This number is divisible by neither 2 nor 3\n"; }
    return 0;
}