#include<iostream>
using namespace std;

int main () {
    cout<<"Kindly enter the number below to find its arithmetic sum:\n";

    int n;
    cin>>n;

    int sum=0;
    for (int counter=1; counter<=n; counter++)
    {
        sum=sum+counter;
    }
    cout<<sum<<endl;

    return 0;
}