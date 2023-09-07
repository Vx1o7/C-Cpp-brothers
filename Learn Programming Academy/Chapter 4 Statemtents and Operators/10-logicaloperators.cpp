#include <iostream>
using namespace std;

int main()
{
    int num1;
    const int lowr = 15;
    const int uper = 97;
    bool limit_check(false);
    cout << boolalpha;

    // limit check: within the boundaries

    cout << "Enter an integer which has bound limit of " << lowr << " and " << uper << " : " << endl;
    cin >> num1;
    limit_check = num1 > lowr && num1 < uper;
    cout << "num1, which is between " << lowr << " and " << uper << " : " << limit_check << endl;

    // limit check: outside of boundaries

    cout << "\nEnter an integer which lies in outside of bound limit " << lowr << " and " << uper << " : " << endl;
    cin >> num1;
    limit_check = num1 < lowr || num1 > uper;
    cout << "num1, which is outside of " << lowr << " and " << uper << " : " << limit_check << endl;

    // limit check: within the boundaries

    cout << "\nEnter an integer which lies within the boundary limit of " << lowr << " and " << uper << " : " << endl;
    cin >> num1;
    limit_check = num1 == lowr || num1 == uper;
    cout << "num1, which is in boundary limit of " << lowr << " and " << uper << " : " << limit_check << endl;

    //test check whether you should wear a sweater or not
    double temp;
    const double temp_limit = 20;
    double wind_speed;
    const double wind_speed_limit = 18;
    bool wear_sweater (false);

    cout<<"Enter the value of temperature of your surrounding area, in Celsius: ";
    cin>>temp;

    cout<<"Enter the value of wind speed according to your area, in kmph: ";
    cin>>wind_speed;

    wear_sweater = temp > temp_limit && wind_speed < wind_speed_limit;
    cout<<"You dont need to wear a sweater. Enjoy man!: "<< wear_sweater<<endl;
    wear_sweater = temp < temp_limit || wind_speed > wind_speed_limit;
    cout<<"Take a sweater while on the go. Happy Winters!: "<< wear_sweater<<endl;
    wear_sweater = temp < temp_limit && wind_speed > wind_speed_limit;
    cout<<"Wear the sweater before going outside. Take measures strictly. Merry Christmas!: "<< wear_sweater<<endl;

    return 0;
}