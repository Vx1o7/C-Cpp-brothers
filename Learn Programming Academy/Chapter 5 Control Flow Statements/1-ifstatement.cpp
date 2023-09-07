/*
First if is greater than 10
Second if is less than 100
Third if it lies in between 10 and 100
Fourth if they are at the boundaries*/

#include <iostream>
using namespace std;

int main ()
{
    int num;
    const int min = 15;
    const int max = 200;

    cout<<"Enter the number here to check the ranges: ";
    cin>>num;

    if (num >= min)
    {
        cout<<num<<" is greater than "<<min<<endl;
        int diff = num -min;
        cout<<num <<" has a postive difference of "<<diff<<" with "<<min<<endl;
    }

    if (num <= max)
    {
        cout<<num<<" is shorter than "<<max<<endl;
        int diff = max - num;
        cout<<num <<" has a negative difference of "<<diff<<" with "<<max<<endl;   
    }
    if (num >= min && num <= max)
    {
        cout<<"\nThe entered number lies within the range! Congratulations"<<endl;
        cout<<"That also means you can see this and above 2 statements as well!"<<endl;
    }
    if (num == min || num ==max)
    {
        cout<<"\nThe entered number lies within the boundary! Congratulations!!"<<endl;
        cout<<"That also means you can see this statements and 3 above as well!"<<endl;
    }

    return 0;
}