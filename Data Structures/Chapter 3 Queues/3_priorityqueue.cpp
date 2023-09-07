#include <iostream>
using namespace std;

int main ()
{
    int chois;
    do
    {
        cout<<"\n1. Insert \n2. Update \n3. Delete \n4. Traverse \n5. Searching \n6. End"<<endl;
        cout<<"Enter Your Choice: "<<endl;
        cin>>chois;

        switch (chois)
        {
        case 1:
            cout<<"Insert\n";
            break;
        
        case 2:
            cout<<"Update\n";
            break;

        case 3:
            cout<<"Delete\n";
            break;

        case 4:
            cout<<"Traverse\n";
            break;

        case 5:
            cout<<"Searching\n";
            break;

        default:
            cout<<"Enter Your choice as per listed above only: ";
            break;
        }
    } while (chois!=6);
    return 0;
}