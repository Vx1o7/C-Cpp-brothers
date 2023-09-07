#include <iostream>
using namespace std;

int main ()
{
    int cents;
    int dollar, quarter, dime, nickel, rest;

    cout<<"Enter here to find the change of the cents: ";
    cin>>cents;

    dollar = cents/100;
    cout<<"Dollars: "<<dollar<<endl;
    rest = cents%100;

    quarter = rest/25;
    cout<<"Quarters: "<<quarter<<endl;
    rest = rest%25;

    dime = rest/10;
    cout<<"Dime: "<<dime<<endl;
    rest = rest%10;

    nickel = rest/5;
    cout<<"Nickel: "<<nickel<<endl;
    rest = rest%5;

    cout<<"Penny: "<<rest<<endl;
    return 0;
}