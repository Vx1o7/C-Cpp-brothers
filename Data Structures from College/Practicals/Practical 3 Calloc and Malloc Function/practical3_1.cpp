#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    float *xarr;
    int nn, indx;
    cin>>nn;
    xarr = (float *)malloc(sizeof(int)*nn);
    for (indx= 0; indx <nn; indx++)
        cin>>xarr[indx];
    
    for (indx= 0; indx <nn; indx++)
        cout<<xarr[indx];

return 0;
}
