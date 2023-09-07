/*finding the larger of two numbers*/

#include <iostream>
using namespace std;

int main()
{
    /*the two numbers */
    int number1, number2;

    /*read the two numbers*/
    cin>>number1;
    cin>>number2;

    /*We will save the larger number here
    We will temprarily assume that the former number is the larger one
    We will check it soon*/
    int max = number1;

    /*We check is the assumption was false*/
    if (number2>max)
        max = number2;
    
    /*We print the result*/
    cout<<"The larger number is "<<max<<endl;
    return 0;
}
