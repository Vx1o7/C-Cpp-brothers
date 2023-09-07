#include <iostream>
using namespace std;

int main () {

    int n;
    cout<<"Enter your number\n";
    cin>>n;
    
    int i;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        { 
            cout<<"Given number is not a prime\n";
            break;
        }
    }
        if (i==n)
        {
            cout<<"Congratulations! You have a prime number!!\n";
        }

    return 0;
}