/*Increment Operators++
Decrement operators--

Increments of decrements by the operand of 1
Can be used with integers, floating integers and pointers

Prefix  ++num
Postfix   num++*/
#include <iostream>
using namespace std;

int main ()
{
    int counter = 10;
    int result = 0;

    // Example 1: Simple Increment

    cout<<"Counter: "<<counter<<endl;
    counter = counter+1;
    cout<<"Counter: "<<counter<<endl;
    counter = counter++;
    cout<<"Counter: "<<counter<<endl;
    counter = ++counter;
    cout<<"Counter: "<<counter<<endl;
    
    // Example 2: Preincrement

    counter = 10;
    result = 0;

    cout<<"\n\n\nCounter: "<<counter<<endl;
    result = ++counter; //note the pre-decrement
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;

    // Example 3: Post-decrement
    counter = 10;
    result = 0;

    cout<<"\n\n\nCounter: "<<counter<<endl;
    result = counter++; //note the pre-decrement
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;

    // Example 4
    counter = 10;
    result = 0;

    cout<<"\n\n\nCounter: "<<counter<<endl;
    result = ++counter + 10; //note the pre-decrement
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;

    // Example 5
    counter = 10;
    result = 0;

    cout<<"\n\n\nCounter: "<<counter<<endl;
    result = counter++ + 10; //note the pre-decrement
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;

    return 0;
}