#include <iostream>
using namespace std;

int main () {

    int a=0;
    int i;
       //0 //0  //1    //1   //1
    i = a + a++ + a-- + ++a + --a;

    cout<<i<<endl;
    return 0;
}