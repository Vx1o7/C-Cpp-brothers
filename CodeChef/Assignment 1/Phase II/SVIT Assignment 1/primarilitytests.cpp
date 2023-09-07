// https://www.codechef.com/submit/PRB01

#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int num;
        cin>>num;
        int i;
        for (i = 2; i < num; i++)
        {
            if (num%i==0)
            {break;}
        }
        if (i!=num)
        {cout<<"no"<<endl;}
        else
        {cout<<"yes"<<endl;}
    }
    return 0;
}