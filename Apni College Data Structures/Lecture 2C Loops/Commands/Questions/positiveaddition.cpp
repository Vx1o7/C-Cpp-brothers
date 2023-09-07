#include<iostream>
using namespace std;

int main () {
    cout<<"Enter a number below: \n";

    int number;
    cin>>number;
    
    int sum=0;
    while (number>=0)
    {
        sum += number;
        cout<<"Enter the another number to add that with first one\n"
        cin>>number;
    }
    cout<<"The sum of those positive numbers is: \n"<<sum<<endl;

    return 0;
}