#include <iostream>
using namespace std;

int main () {

    int i=10;
    int j=20;
    int k;
      //10 //20 //10 //20  //22
    k = i + j + i-- + j++ - ++j;

    cout<<i<<endl;//9
    cout<<j<<endl;//22
    cout<<k<<endl;//38
    return 0;
}