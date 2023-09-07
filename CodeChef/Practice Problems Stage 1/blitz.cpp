// https://www.codechef.com/problems/BLITZ3_2?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout<<((2*(180 + a))-(c+b))<<endl;
	}
	return 0;
}