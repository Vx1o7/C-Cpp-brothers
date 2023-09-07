// https://www.codechef.com/problems/TTENIS

#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char str[101];
	    cin>>str;
	    int n=strlen(str);
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                a++;
            }
            if(str[i]=='0'){
                b++;
            }
        }
        if(a>b){
            cout<<"WIN"<<endl;
        }
        else{
            cout<<"LOSE"<<endl;
        }
	    
	}
	return 0;
}
