#include <iostream>

using namespace std;

int main() 
{
        int value;

        cout << "Give me a number and I will square it!\n";
        cin >> value;
        
        int square = value * value;
        cout << "You've given " << value << endl;
        cout << "The squared value is " << square << endl;
}