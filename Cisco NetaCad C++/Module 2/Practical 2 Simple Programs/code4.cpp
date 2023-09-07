#include <iostream>

using namespace std;

int main()
{
    /*We will count the numbers here*/
    int evens = 0, odds = 0;

    /*we will store the incoming numbers here*/
    int number;

    /*read the first number*/
    cin>>number;


    /*0 terminates execution*/
    while (number !=0)
    {
        /*check if the number is odd*/
        if (number%2 ==1)
        {
            /*increase odd number*/
            odds++;
        }
        else
        {
            /*increase even counter */
            evens++;
        }
        cin>>number;        
    }
    /*print results*/
    cout<<"Even numbers: "<<evens<<endl;
    cout << "Odd numbers: " << odds << endl;
    return 0;
}
