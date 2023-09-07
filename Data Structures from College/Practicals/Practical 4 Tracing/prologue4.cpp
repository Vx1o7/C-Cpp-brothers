#include <iostream>
using namespace std;

struct student
{
    int enrollment;
    char name[40];
    char number [40];
};

int main ()
{
    struct student studentList [100];
    int index;
    for (index = 0; index < 4; index++)
    {
        cout<<"Enter your Enrollment Number: ";
        cin>>studentList[index].enrollment;
        cout<<"Enter Your Name less than 40 Characs: ";
        gets(studentList[index].name);
        cout<<"Enter your mobile number here: ";
        gets (studentList[index].number);
    }
    for (index = 0; index < 4; index++)
    {
        cout<<"Your Bloody Name is: ";
        puts(studentList[index].name);
        cout<<"\nYour unfortunate roll number is: "<<studentList[index].enrollment<<endl;
        cout<<"And your uninstalled number is: "<<studentList[index].number<<endl;
    }
    return 0;
}