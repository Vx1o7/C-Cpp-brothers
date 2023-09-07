#include <iostream>
#include <stdlib.h>
using namespace std;

struct stack {
    int size;
    int top;
    int *arr; //* is used as a pointer, which is used to allocate the memory dynamically
};

int empty_check (struct stack *lol)
{if (lol->top == -1)
    {
        cout<<"The Stack is Empty, underflow"<<endl;
        return 1;
    }
    else {
        return 0;
    }
}

int full_check (struct stack *asset)
{
    if (asset->top == asset->size -1)
    {
        cout<<"The Stack is Overload, overflow"<<endl;
        return 1;
    }
    else {
        return 0;
    }
}

void push (struct stack *asset, int val)
{
    if (full_check(asset))
    {
        cout<<"Stack cannot add the value "<<val<<endl;
        return;
    }
    else {
        asset->top++;
        asset->arr[asset->top] = val;
    }
}

int pop (struct stack *asset)
{
    if (empty_check(asset))
    {
        cout<<"Try to push next time! "<<endl;
        return -1;
    }
    else {
        int num;
        num = asset->arr[asset->top];
        asset->top--;
        cout<<"Popped the following number from the stack: "<<num<<endl;
    }
}

int main ()
{
    struct stack *sp = (struct stack *) malloc (sizeof(struct stack )); 
    /*End se pkd, malloc is used to create the space storage dynamically. Ab since humme ek hi stack banana hai, so
    sizeof k aage koi number nahi. Size kiski? Struct stack ki. Aur sp isi dynamic allocation ka address store karega 
    so hum ab by arrow, -> ka use kar sakte hai*/
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc (sp->size* sizeof (int));
    //Line 19 actually creates the stack, jisme hum apna values daalenge 
    cout<<"Stack has been created successfully"<<endl;

    cout<<"Before Pushing: "<<empty_check(sp)<<endl;
    cout<<"Before Pushing: "<<full_check(sp)<<endl;
    push(sp, 12);
    push(sp, 8);
    push(sp, 10);
    push(sp, 17);
    push(sp, 22);
    push(sp, 198);
    push(sp, 15);
    push(sp, 1);
    push(sp, 56); // Pushed 10 Values
    push (sp, 78); // Stack Overflow, as the number of adding elements has already reached to its maximum size
    cout<<"After Pushing: "<<empty_check(sp)<<endl;
    cout<<"After Pushing: "<<full_check(sp)<<endl;

    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    

    return 0;
}