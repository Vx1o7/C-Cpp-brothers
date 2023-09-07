// https://www.codechef.com/submit/DPOLY?tab=statement

#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int terms, coeff;
        cin>>terms;
        int power = 0;
        for (int i = 0; i < terms ; i++)
        {
            cin>>coeff;
            if (coeff!=0)
            {
                power = i;
            }
            
        }
        cout<<power<<endl;
    }
    return 0;
}