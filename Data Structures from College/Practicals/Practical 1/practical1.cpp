#include <iostream>
using namespace std;

void faltu_arr (int xarr[], int n)
{
    int indx;
    for (indx = 0; indx<n; indx++)
        cout<<"xarr["<<indx<<"]"<<" = "<<xarr[indx]<<endl;

    for (indx = 0; indx<n; indx++)
        indx[xarr] = indx[xarr]*2;

    for (indx = 0; indx<n; indx++)
        cout<<"xarr["<<indx<<"]"<<" = "<<xarr[indx]<<endl;
}

int main()
{
    int xarr[10], n = 5;
    int indx;
    for (indx = 0; indx<n; indx++)
        xarr[indx] = indx+1;
    
    for (indx = 0; indx<n; indx++)
        cout<<"xarr["<<indx<<"]"<<" = "<<xarr[indx]<<endl;

    cout<<"------------------------ \n";
    faltu_arr (xarr, n);
    cout<<"------------------------ \n";

    for (indx = 0; indx<n; indx++)
        cout<<"xarr["<<indx<<"]"<<" = "<<xarr[indx]<<endl;
    
    return 0;
}