#include <iostream>
using namespace std;

int main ()
{
    int num1 = 56;
    int num2 = 83;

    cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;

    int result;
    result = num1 + num2;
    cout<<num1<<" + "<<num2<<" = "<<num1+num2 <<" on the basis of result method"<<endl;

    result  = num1 - num2;
    cout<<num1<<" - "<<num2<<" = "<<num1-num2 <<" on the basis of result method"<<endl;

    result = num1*num2;
    cout<<num1<<" * "<<num2<<" = "<<num1*num2 <<" on the basis of result method"<<endl;

    result = num1/num2;
    cout<<num1<<" / "<<num2<<" = "<<num1/num2 <<" on the basis of result method"<<endl;

    result = num2/num1;
    cout<<num2<<" / "<<num1<<" = "<<num2/num1 <<" on the basis of result method"<<endl;

    result = num1%num2;
    cout<<num1<<" % "<<num2<<" = "<<num1%num2 <<" on the basis of result method"<<endl;

    num1 = 10;
    num2 = 3;

    result = num1 %num2;
    cout<<num1<<" % "<<num2<<" = "<<num1%num2 <<" on the basis of result method"<<endl;
    result = num1*10 + num2;

    cout<<5/10<<endl;
    cout<<5.0/10.0<<endl;

    return 0;
}