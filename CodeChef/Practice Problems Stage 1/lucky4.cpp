#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	   {
	       long n;
	       cin>>n;
	       int count = 0;
	       long temp = n;
	       while (temp != 0)
	       {
	           int rem = temp%10;
	           if (rem == 4)
	           {count++;}
	           temp = temp/10;
	       }
	       cout<<count<<endl;
	   }
	return 0;
}