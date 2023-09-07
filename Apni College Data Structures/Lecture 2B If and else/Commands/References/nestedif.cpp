#include<iostream>
using namespace std;

int main () {

    int x,y;
    cin>>x>>y;

    if (x==y)
    {
        cout<<"You are lucky asshole. Both Numbers are equal"<<endl;
    }
    else 
    {
        if (x>y)
        {
            cout<<"X is somehow greater than Y"<<endl;
        }
        else
        {
            cout<<"Tutti kismat hai teri, bhadwe. Y is greater than X"<<endl;
        }
    }
}