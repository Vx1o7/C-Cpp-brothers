// https://www.codechef.com/submit/CHN15A

#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int mins, value;
        cin>>mins>>value;
        int wolve = 0;
        for (int i = 0; i < mins; i++)
        {
            int initial;
            cin>>initial;
            if ((initial+value)%7 == 0)
            {wolve++;}
        }
        cout<<wolve<<endl;
    }
    return 0;
}