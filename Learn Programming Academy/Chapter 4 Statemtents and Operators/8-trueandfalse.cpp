#include <iostream>
using namespace std;

int main ()
{
    bool equal_result (false);
    bool not_equal_result (false);
    
    cout<<boolalpha;   // displays true and false value instead of 0 and 1 int comparision results section.
    
    int num1, num2;
    cout<<"Enter two integers separated by a space or a line: ";
    cin>>num1>>num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout<<"Comparision Results (equals): "<<equal_result<<endl;
    cout<<"Comparision Results (not equals): "<<not_equal_result<<endl<<endl;

    char char1, char2;
    cout<<"Enter two characters separated by a space or a line: ";
    cin>>char1>>char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout<<"Comparision Results (equals): "<<equal_result<<endl;
    cout<<"Comparision Results (not equals): "<<not_equal_result<<endl<<endl;

    double double1, double2;
    cout<<"Enter two decimal integers separated by a space or a line: ";
    cin>>double1>>double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    cout<<"Comparision Results (equals): "<<equal_result<<endl;
    cout<<"Comparision Results (not equals): "<<not_equal_result<<endl<<endl;

    cout<<"Enter an integer and a double separated by a space or a line: ";
    cin>>num1>>double2;
    equal_result = (num1 == double2);
    not_equal_result = (num1 != double2);
    cout<<"Comparision Results (equals): "<<equal_result<<endl;
    cout<<"Comparision Results (not equals): "<<not_equal_result<<endl<<endl;


    return 0;
}