#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int **xarr;
    int nr, nc;
    int rindx, *cindx;
    cout<<"Enter the number of rows and columns you want to enter: ";
    cin>>nr>>nc;
    cindx = (int *)malloc(sizeof(int)*nc);
    xarr = (int **)malloc(sizeof(int*)*nr);
    for (rindx = 0; rindx<nr; rindx++)
    {
        cout<<"How many columns do you want in a row?: ";
        // cin>>rindx[nr];
        xarr[rindx] = (int*)malloc(sizeof(int)*nc); 
    }
    for (rindx = 0; rindx<nr; rindx++)
    {
        // for (cindx = 0; cindx < nc; cindx++)
        {
            cout<<rindx<<"     "<<cindx;
            // cin>>xarr[rindx][cindx];
        }
    }
     for (rindx = 0; rindx<nr; rindx++)
    {
        // for (cindx = 0; cindx < nc; cindx++)
        {
            // cout<<xarr[rindx][cindx];
        }
        cout<<endl;
    }
    for (rindx=0; rindx<nr; rindx++)
    {
        free(xarr[rindx]);
    }
    free (xarr);
    return 0;
}