// https://www.codechef.com/problems/ALPHABET

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int x;
	cin>>x;
	while(x--)
	{
	string w;
	cin>>w;
	int count = 0;
	for(int i=0;i<w.length();i++)
	{
	    for(int j=0;j<s.length();j++)
	    {
	        if(w[i]==s[j])
	        {
	            count++; 
	            break;
	        }
	    }
	}
	if(count == w.length())
	{
	    cout<<"Yes"<<endl;
	}
	else{
	    cout<<"No"<<endl;
	}
	}
	
	return 0;
}