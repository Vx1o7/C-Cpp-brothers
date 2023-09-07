// https://www.codechef.com/START75D/problems/TWORANGES

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    int a, b, c, d, count = 0;
	    cin>>a>>b>>c>>d;
	    int min, max;
	    if (a>c)
	       min=c;
	    else
	       min = a;
	       
	    if (b>d)
	       max = b;
	    else
	       max = d;
	    for (int i=min; i<=max; i++)
	    {
	        if ( (i>=a && i<=b) || (i>=c && i<=d))
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}