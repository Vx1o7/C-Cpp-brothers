#include <iostream>
using namespace std;

int main ()
{
    cout<<"Welcome to Bitch's Cleaning Service!\n"<<endl;
    cout<<"Price per room to clean: Rs. 999"<<endl;
    cout<<"How much rooms would you like to clean?: "<<endl;

    int rooms;
    cin>>rooms;

    const double price = 999;
    const double tax = 0.08;
    const int days = 30;
    
    cout<<"\nNumber of rooms you've entered: "<<rooms<<endl;
    cout<<"Customer Price to clean: "<<price*rooms<<endl;
    cout<<"Tax Price to clean the rooms: "<<price*rooms*tax<<endl;
    cout<<"\n================================================="<<endl;
    cout<<"\nThe total price to clean the room is Rs. "<<(price*rooms) + (price*rooms*tax)<<endl;
    cout<<"This cleaning service estimates and valids till "<<days<<" days"<<endl;
    cout<<"Thank you so much for choosing us!!"<<endl;

    return 0;
}