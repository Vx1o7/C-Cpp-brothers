#include<iostream>
using namespace std;

int main ()
{
    int a; //here we have decided that theres a variable called A and we considered as an integer
    a = 12; //after that we initialized or assumed that a is gonna be 12

    cout <<"size of int "<<sizeof(a)<<endl; // like java says systemoutprintln, like that we use cout in cpp, note that here we used arrow marks in printing part, the thing we want to show by pc
    // here we want to show how much size does an integer use. Similarly, we used different variables for different data types to show their own size too
    //

    float b;
    cout <<"size of float "<<sizeof(b)<<endl;

    char c;
    cout <<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout <<"size of bool "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout <<"size of short int "<<sizeof(si)<<endl;
    cout <<"size of long int "<<sizeof(li)<<endl;

    return 0;
} // exit of the command