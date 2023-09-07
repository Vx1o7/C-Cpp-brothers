/*Stack Overflows and Underflows*/
#include <iostream>
#define max 6
using namespace std;

int str[max];
int top = -1;

void push ()
{
    if (top == max)
      cout<<"Overflow \n";
    else 
    {   cout<<"Enter the value for the new stack: ";
        cin>>str[++top];}
    return;
}

int pop()
{
    if (top == -1)
        {cout<<"Underflow\n";
        return -1;}
    return str[top--];
}


int main ()
{
    cout<<"Welcome to Push and Pop Wizard\n. On the basis of 6 stacks, you will either have to push or pop\n. Select any of one at a time. Happy Pushing!\n";
    for (int i = 1; i < 9; i++)
    {
        int dec;
        cout<<"top = "<<top<<endl;
        cout<<"Choose any one. 1 for Push and 2 for Pop\n. This is step "<<i<<" out of 8:   ";
        cin>>dec;
        if (dec == 1)
            push();
        else if (dec ==2)
            pop();
        else
            cout<<"Wrong Input please try again\n";
    }
}