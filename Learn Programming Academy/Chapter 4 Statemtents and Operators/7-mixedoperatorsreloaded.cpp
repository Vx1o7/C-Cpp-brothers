/*Mixed type expressions
Ask the user to the 3 integers
Calculate the sum of 3 integers and then its average.

Display the 3 integers entered
the sum and average of 3 integers.*/


#include <iostream>
using namespace std;

int main ()
{
    int total;
    int num1, num2, num3;
    int count = 3;

    cout<<"Enter the 3 integers here separated by spaces or by lines: ";
    cin>>num1>>num2>>num3;

    total = num1+num2+num3;
    double average = 0.0;
    average  = total/count;
    cout<<"The sum of the three numbers is: "<<total<<endl;
    cout<<"And the average of the total is: "<<average<<endl<<endl;

    average  = static_cast<double>(total)/count;
    // average = (double)total/count;
    cout<<"The sum of the three numbers is: "<<total<<endl;
    cout<<"And the average of the total is: "<<average<<endl<<endl;


    return 0;
}