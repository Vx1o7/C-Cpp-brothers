// https://www.codechef.com/problems/SPELLBOB

#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while(tt--){
    string a, b;
    cin >> a >> b;
    vector<int> O, B;
    for(int j=0; j<3; ++j){
      if(a[j]=='b' || b[j]=='b')
        B.push_back(1);
      else
        B.push_back(0);
      if(a[j]=='o' || b[j]=='o')
        O.push_back(1);
      else  
        O.push_back(0);
    }
    cout << ((B[0] && O[1] && B[2]) || (O[0] && B[1] && B[2]) || (B[0] && B[1] && O[2]) ? "yes" : "no");
    if(tt)  cout << endl;
  }
  return 0;
}