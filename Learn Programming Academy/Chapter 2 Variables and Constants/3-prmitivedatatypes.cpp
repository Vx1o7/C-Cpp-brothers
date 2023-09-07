#include <iostream>
using namespace std;

int main ()
{
    //char

    char middle_letter {'R'};
    cout<<"My Middle Letter Name is "<<middle_letter<<endl;

    // integer data types

    unsigned short height {181};
    cout<<"My Height is "<<height<< " centimeters"<<endl;

    int cwg_countries = 38;
    cout<<"In every commonwealth games, "<<cwg_countries<<" takes participation"<<endl;

    long people_brc = 2456125;
    cout<<"There are more than "<<people_brc<<" residing in my city Vadodara"<<endl;

    long people_eth = 7825648;
    cout<<"More than "<<people_eth<<" lives in this planet"<<endl;

    long long distance = 153000000000000000;
    cout<<"The distance between the earth and the sun is "<<distance<<endl;

    // decimal data types

    float percentage {94.16};
    cout<<"I scored "<<percentage<< " in grade 10"<<endl;

    double pi = 3.14159875;
    cout<<"The value of pi is "<<pi<<endl;

    long double large_num {2.7e118};
    cout<<large_num<<" is quite is large number"<<endl;

    // boolean data type

    bool you_win {true};
    cout<<"The value of winning a game is "<<you_win<<endl;

    //overflow

    short int1 = 32000;
    short int2 = 2018;
    short int3 = int1*int2;

    cout<<"The summation value of int1 and int2 is"<<int3<<endl;

    return 0;
}