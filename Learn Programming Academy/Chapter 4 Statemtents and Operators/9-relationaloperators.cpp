#include <iostream>
using namespace std;

int main ()
{
    cout<<boolalpha;
    int num1, num2;
    cout<<"Gimme two numbers separated by some spaces or lines: ";
    cin>>num1>>num2;

    cout<<num1<<" < "<<num2<<" : "<<(num1 < num2)<<endl;
    cout<<num1<<" <= "<<num2<<" : "<<(num1 <= num2)<<endl;
    cout<<num1<<" > "<<num2<<" : "<<(num1 > num2)<<endl;
    cout<<num1<<" >= "<<num2<<" : "<<(num1 >= num2)<<endl;

    const int upr = 70;
    const int lwr = 25;

    cout<<"\nEnter an integer which is greater than 25: ";
    cin>>num1;
    cout<<num1<<" > "<<lwr<<" : "<<(num1 > lwr)<<endl;

    cout<<"\nEnter an integer which is shorter than 70: ";
    cin>>num1;
    cout<<num1<<" < "<<upr<<" : "<<(num1 < upr)<<endl;
    return 0;
}