#include <iostream>
using namespace std;

int main () {

    char button;
    cout<<"Enter the keyword\n";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Windows 11\n";
        break;
    
    case 'b':
    cout<<"Windows 10, Windows 8.1, Windows 8\n";
    break;

    case 'c':
    cout<<"Windows 7, Windows Server 2010, Windows Vista\n";
    break;

    case 'd':
    cout<<"Windows Server 2003, Windows XP, Windows 2000";
    break;

    case 'e':
    cout<<"Thank you for choosing Windows 98. and Welcome to Microsoft Windows 95";
    break;

    default:
    cout<<"For future updates, please subscribe to the channel";
        break;
    }

    return 0;
}