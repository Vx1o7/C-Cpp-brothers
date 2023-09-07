#include <iostream>
using namespace std;

int main ()
{
    int num;
    const int target = 29;

    cout<<"Enter the number here to check the ranges: ";
    cin>>num;
    cout<<"\n\n===========================================================\n\n";

    if (num >= target)
    {
        cout<<num<<" is greater than "<<target<<endl;
        int diff = num -target;
        cout<<num <<" has a postive difference of "<<diff<<" with "<<target<<endl;
    }
    else
    {
        cout<<num<<" is shorter than "<<target<<endl;
        int diff = target - num;
        cout<<num <<" has a negative difference of "<<diff<<" with "<<target<<endl; 
    }
    return 0;
}