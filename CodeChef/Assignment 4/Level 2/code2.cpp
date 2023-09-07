// https://www.codechef.com/problems/CHEALG

#include <bits/stdc++.h>


typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int count = 1;
	    string str;
	    cin>>str;
	    int n = str.size();
	    string ans;
	    for(int i=0; i<n-1; i++){
	        if(str[i] == str[i+1]){
	            count++;
	        }
	        else{
	            ans += str[i];
	            ans += to_string(count);
	            count = 1;
	        }
	    }
	    ans += str[n-1];
	    ans += to_string(count);
	   // cout<<ans<<endl;
	    if(ans.size() < n){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
