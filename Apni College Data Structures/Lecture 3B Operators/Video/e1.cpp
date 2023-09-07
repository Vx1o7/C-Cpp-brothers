#include <iostream>
using namespace std;

int main () {

    int i = 10;
    int a;

    a = i++ + ++i;

    cout<<a<<endl;

    return 0;
}