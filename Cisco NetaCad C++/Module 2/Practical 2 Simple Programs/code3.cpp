#include <iostream>

using namespace std;

int main()
{
    /*temporary storage for the incoming numbers*/
    int number;

    /*get the first value*/
    cin>> number;

    /*we will store the currently greatest number here*/
    int max = number;
    while (number != -1)
    {
        /*is the number greater than max?*/
        if (number > max)
        {
            /*yes - update max*/
            max = number;
            /*get next number*/
        }
        /*get next number*/
        cin>> number;
    }
    /*print the largest number*/
    cout<<"The largest number is :"<<endl;
    return 0;
}
