#include<iostream>
using namespace std;

int main ()
{
    int a; //declaration
    a = 12; //initialization

    cout <<"size of int "<<sizeof(a)<<endl; //here we are finding the size of an integer

    float b;
    cout <<"size of float "<<sizeof(b)<<endl; //finding size of a float, which are decimals, exponents, etc

    char c;
    cout <<"size of char "<<sizeof(c)<<endl; //finding size of a character

    bool d;
    cout <<"size of bool "<<sizeof(d)<<endl; //boolean has 2 values: either true or false
    return 0;
}