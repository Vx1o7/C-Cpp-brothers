// https://www.codechef.com/SVIT2FPP07/problems/COVID19

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> x(n) ;
	    for(int i=0; i<n ; i++)
	    {
	        cin>>x[i];
	    }
	    int temp=1,worst=1,best=n;
	    for(int i=1; i<n; i++)
	    {
	        if(x[i]-x[i-1]>2)
	        {
	            if(temp<best)
	               best=temp;
	            if(temp>worst)
	               worst=temp;
	           temp=1;
	        }
	        else
	        {
	            temp++;
	        }
            
	    }
	        if(temp<best)
	           best=temp;
	        if(temp>worst)
	           worst=temp;
	    cout<<best<<' '<<worst<<endl;
	}
	return 0;
}
