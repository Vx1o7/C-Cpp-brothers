// https://www.codechef.com/problems/CHEFSTLT

#include <bits/stdc++.h>
#define int long long
using namespace std;
//int long long m=1e9+7;
void IOS(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}


int32_t main() {
    int t;
    cin>>t;
    while(t--){
        string s1;
        string s2;
        cin>>s1>>s2;
        int min=0; int max=0;
        for(int i=0; i<s1.length(); i++){
            if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?'){
                min++;
                max++;
            }
            else{
            if(s1[i]==s2[i] && s1[i]=='?'){
                    max++;
                }
                else{
                    if(s1[i]=='?' || s2[i]=='?'){
                        max++;
                    }
                }
            }
        }
            cout<<min<<" "<<max<<'\n';
        }
    return 0;
}