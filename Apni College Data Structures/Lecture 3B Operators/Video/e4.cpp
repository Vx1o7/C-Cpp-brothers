#include <iostream>
using namespace std;

int main () {

    int i=1;
    int j=2;
    int k=3;
    int l;
        //1   //1   //3
    l = i-- - --j + k--;

    cout<<i<<endl;//0
    cout<<j<<endl;//1
    cout<<k<<endl;//2
    cout<<l<<endl;//3

    return 0;
}