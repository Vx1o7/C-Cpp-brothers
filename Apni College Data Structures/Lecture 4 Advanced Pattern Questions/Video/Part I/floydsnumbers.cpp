#include <iostream>
using namespace std;

int main () {

    cout<<"Kindly enter the number to view the number of lanes as pyramid\n";

    int a;
    cin>>a;

    int count=1;

    for (int i = 1; i<=a; i++)
    {
        for (int j=1; j<=i; j++)
        { cout<<count<<" ";
          count++;
        }
        cout<<endl;
    }
    return 0;
}