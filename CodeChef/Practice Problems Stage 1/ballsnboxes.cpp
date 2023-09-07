// https://www.codechef.com/problems/BALLBOX?tab=statement

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    int x, y;
	    cin>>x>>y;
	    y= y*(y+1)/2;
	    if(x>=y)
	        cout<<"YES";
	    else
	        cout<<"NO";
	   cout<<endl;
	}
	return 0;
}
