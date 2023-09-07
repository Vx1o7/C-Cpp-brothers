#include <cstdlib>
#include <iostream>
using namespace std;

int main ()
{
    int **xarr;
    int nr, nc;
    int rindx, cindx;
    cout<<"Enter the number of rows and columns you want to enter: ";
    cin>>nr>>nc;
    xarr = (int **)malloc(sizeof(int*)*nr);
    for (rindx = 0; rindx<nr; rindx++)
        xarr[rindx] = (int*)malloc(sizeof(int*)*nc);

    for (rindx = 0; rindx<nr; rindx++)
    {
        for (cindx = 0; cindx<nc;cindx++)
        {
            cout<<"You are entering at Row: "<<rindx<<"     and Column: "<<cindx<<endl;
            cin>>xarr[rindx][cindx];
        }
    }
    for (rindx = 0; rindx<nr; rindx++)
    {
        for (cindx = 0; cindx<nc;cindx++)
        {
            cout<<xarr[rindx][cindx];
        } cout<<"\n";
    }
    for (rindx=0; rindx<nr; rindx++)
    {
        free(xarr[rindx]);
    }
    free (xarr);
    return 0;
}