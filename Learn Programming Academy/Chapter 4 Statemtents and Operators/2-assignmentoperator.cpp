#include <iostream>
using namespace std;

int main ()
{
    int num1 = 25;    // errors and mistakes: when you initialize constant 'const' before declaring the statement,
    int num2 = 38;

    cout<<"Value of num1 is: "<<num1<<endl;
    cout<<"Value of num2 is: "<<num2<<endl;

    num1 = 77;
    cout<<"\n\nUpdate"<<endl;
    cout<<"Value of num1 is: "<<num1<<endl;
    cout<<"Value of num2 is: "<<num2<<endl;

    num1 = num2;
    cout<<"\n\nUpdate"<<endl;
    cout<<"Value of num1 is: "<<num1<<endl;
    cout<<"Value of num2 is: "<<num2<<endl;

    num1 = num2 = 18;
    cout<<"\n\nUpdate"<<endl;
    cout<<"Value of num1 is: "<<num1<<endl;
    cout<<"Value of num2 is: "<<num2<<endl;

    //errors and mistakes
    // num1 = 'Varun'
    // 9999 = num1

    return 0;
}