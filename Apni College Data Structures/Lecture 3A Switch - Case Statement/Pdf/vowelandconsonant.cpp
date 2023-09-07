#include <iostream>
using namespace std;

int main () {

    char ok;
    cout<<"Enter the alphabet here to determine whether its a vowel or a consonant\n";
    cin>>ok;

    switch (ok)
    {
    case 'a':
        cout<<"Its a vowel\n";
        break;

    case 'e':
        cout<<"Its a vowel\n";
        break;

    case 'i':
        cout<<"Its a vowel\n";
        break;

    case 'o':
        cout<<"Its a vowel\n";
        break;

    case 'u':
        cout<<"Its a vowel\n";
        break;
    
    default:
    cout<<"Its a consonant\n";
        break;
    }


    return 0;
}