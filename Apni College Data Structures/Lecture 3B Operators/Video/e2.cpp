#include <iostream>
using namespace std;

int main () {

    int a=7;
    int b=3;
    int c;

    //7  //3   //7   //4
    c = a + b + a++ + ++b;

    cout<<c<<endl;
    return 0;
}