#include<iostream>
using namespace std;

int main () {

    cout<<"Kindly enter a number to show its multplication table upto 10!: \n";

    int n;
    cin>>n;

    for (int i=1; i<=10; ++i)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}