#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector <int> vector1;
    vector <int> vector2;
    cout<<"Enter a new value to add in the vector1: ";
    int new_value;
    cin>>new_value;
    vector1.push_back(new_value);

    cout<<"\n\nEnter a new value again to add in the vector1: ";
    cin>>new_value;
    vector1.push_back(new_value);
    cout<<"The values added in the vector 1 are:"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"There are "<< vector1.size()<<" entries added in vector1.";

    cout<<"\n\nEnter a new value to add in the vector2: ";
    cin>>new_value;
    vector2.push_back(new_value);

    cout<<"\n\nEnter a new value again to add in the vector2: ";
    cin>>new_value;
    vector2.
    push_back(new_value);
    cout<<"The values added in the vector2 are:"<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"There are "<< vector2.size()<<" entries added in vector2.";

    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"The entries added in the vector2d are: "<<endl<<endl;
    cout<<vector_2d.at(0).at(0)<<" . "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" . "<<vector_2d.at(1).at(1)<<endl;
    cout<<"Change the first value in vector 1: ";
    cin>>vector1.at(0);
    vector_2d.at(0).at(0) = vector1.at(0);

    cout<<"The updated entries added in the vector2d are: "<<endl<<endl;
    cout<<vector_2d.at(0).at(0)<<" . "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" . "<<vector_2d.at(1).at(1)<<endl;

    cout<<"The updated values added in the vector 1 are:"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;

    return 0;
}