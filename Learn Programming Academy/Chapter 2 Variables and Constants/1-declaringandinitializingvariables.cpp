#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the width of the room: ";
    int room_width;
    cin>>room_width;

    cout<<"Enter the length of the room: ";
    int room_length;
    cin>>room_length;

    cout<<"The carpet area for the room is "<< room_width*room_length<< " square feet."<<endl;
    return 0;
}