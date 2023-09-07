// Practical 9: Id and ship
#include <iostream>
using namespace std;

int main ()
{int n;
cin>>n;
for (int i = n; i >0; i--)
{
    char ship;
    cin>>ship;
    if (ship == 'B' || ship == 'b')
    {cout<<"BattleShip\n";}
    else if (ship == 'C' || ship == 'c')
    {cout<<"Cruiser\n";}
    else if (ship == 'D' || ship == 'd')
    {cout<<"Destroyer\n";}
    else if (ship == 'F' || ship == 'f')
    {cout<<"Frigate\n";}
} 
    
return 0;
}
