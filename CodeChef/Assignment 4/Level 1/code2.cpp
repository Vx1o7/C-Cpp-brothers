// https://www.codechef.com/problems/SNAKPROC

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string sn;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!='.')
	        {
	            sn+=s[i];
	        }
	    }
	    bool ans = true;
	    if(sn.length() %2!=0){
	      ans = false;
	    }
	     else{
	         for(int i=0; i<sn.length(); i++)
	         {
	            if(i%2==0)
	            {
	                if(sn[i]=='T')
	                  ans=false;
	            }
	            else
	            {
	                if(sn[i]=='H')
	                 ans=false;
	            }
	         }
	     }
	     if(ans)
	       cout<<"Valid"<<endl;
	      else
	        cout<<"Invalid"<<endl;
	      
	    
	}
	return 0;
}