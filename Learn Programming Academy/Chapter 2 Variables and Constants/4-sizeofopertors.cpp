#include <iostream>
#include <climits>
using namespace std;

int main ()
{
    cout<<"sizeof information"<<endl<<"======================="<<endl;

    cout<<"char: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"unsigned int: "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"short: "<<sizeof(short)<<" bytes"<<endl;
    cout<<"long: "<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long"<<sizeof(long long)<<" bytes"<<endl;

    cout<<"============================================"<<endl;

    cout<<"float: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"double: "<<sizeof(double)<<" bytes"<<endl;
    cout<<"long double: "<<sizeof(long double)<<" bytes"<<endl<<endl;

    //now heres a use of <climits>

    cout<<"==============================================="<<endl<<endl;
    cout<<"Minimum values: "<<endl;
    cout<<"char: "<<CHAR_MIN<<endl;
    cout<<"short: "<<SHRT_MIN<<endl;
    cout<<"int: "<<INT_MIN<<endl;
    cout<<"long: "<<LONG_MIN<<endl;
    cout<<"long long: "<<LLONG_MIN<<endl;

    cout<<endl<<"==============================================="<<endl<<endl;
    cout<<"Maximum Values: "<<endl;
    cout<<"char: "<<CHAR_MAX<<endl;
    cout<<"short: "<<SHRT_MAX<<endl;
    cout<<"int: "<<INT_MAX<<endl;
    cout<<"long: "<<LONG_MAX<<endl;
    cout<<"long long: "<<LONG_LONG_MAX<<endl;

    //sizeof can also be used with variable names

    cout<<endl<<"============================================="<<endl<<endl;
    cout<<"sizeof using variable names: "<<endl;
    int age = 18;
    cout<<"sizeof age is "<<sizeof age<<" bytes"<<endl;
    double wage = 56.86535;
    cout<<"sizeof wage is"<<sizeof wage<<" bytes"<<endl;

    return 0;
}