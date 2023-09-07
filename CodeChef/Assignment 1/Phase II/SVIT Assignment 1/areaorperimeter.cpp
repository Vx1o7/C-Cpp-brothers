// https://www.codechef.com/submit/AREAPERI
#include <iostream>
using namespace std;

int main ()
{
    int len, bdh;
    int area, peri;
    cin>>len>>bdh;
    area = len*bdh;
    peri = 2*(len+bdh);
    if (area<peri)
    {
        cout<<"Peri"<<endl;
        cout<<peri<<endl;
    }
    else if (area>peri)
    {
        cout<<"Area"<<endl;
        cout<<area<<endl;
    }
    else
    {
        cout<<"Eq"<<endl;
        cout<<peri;
    }
    return 0;
}