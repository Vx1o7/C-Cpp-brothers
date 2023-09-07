#include <iostream>
using namespace std;

int main ()
{
    cout<<"Welcome to Bitch's Cleaning Service!\n"<<endl;
    cout<<"Price per small room to clean: Rs. 649"<<endl;
    cout<<"Price per big room to clean: Rs. 1099"<<endl;
    cout<<"How much small rooms would you like to clean?: "<<endl;
    int small_rooms;
    cin>>small_rooms;


    cout<<"How much big rooms would you like to clean?: "<<endl;
    int big_rooms;
    cin>>big_rooms;

    const double small_price = 649;
    const double big_price = 1099;
    const double tax = 0.08;
    const int days = 30;
    
    cout<<"\nNumber of Small Rooms you've entered"<<small_rooms<<endl;
    cout<<"Number of Big rooms you've entered: "<<big_rooms<<endl;
    cout<<"Customer Price for Small Rooms to clean: "<<small_price*small_rooms<<endl;
    cout<<"Customer Price for Big Rooms to clean: "<<big_price*big_rooms<<endl;
    cout<<"Tax Price to clean the rooms: "<<(small_price*small_rooms + big_price*big_rooms)*tax<<endl;
    cout<<"\n================================================="<<endl;
    cout<<"\nThe total price to clean the room is Rs. "<<(small_price*small_rooms + big_price*big_rooms)+ (small_price*small_rooms + big_price*big_rooms)*tax <<endl;
    cout<<"This cleaning service estimates and valids till "<<days<<" days"<<endl;
    cout<<"Thank you so much for choosing us!!"<<endl;

    return 0;
}