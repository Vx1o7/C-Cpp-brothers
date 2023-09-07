#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct stack {
    int size;
    int top;
    char *arr; //* is used as a pointer, which is used to allocate the memory dynamically
};

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

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

void push (struct stack *asset, char val)
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
        char num;
        num = asset->arr[asset->top];
        asset->top--;
        cout<<"Popped the following number from the stack: "<<num<<endl;
    }
}

int precedence (char ch) {
    if (ch== '+' || ch== '-')
    {
        return 2;
    }
    else if (ch=='*' || ch== '/')
    {
        return 3;    
    }
    }


int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else {
        return 0;
    }
}

char * intopo (char * infix)
{
    struct stack *sp = (struct stack *) malloc (sizeof(struct stack));
    //Line 66 actually creates the stack, jisme humara postfix values convert karne k liye ek intermediate act kregi daalenge 
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *) malloc (sp->size* sizeof (char));
    char *postfix = (char * ) malloc ((strlen (infix+1))*sizeof (char));
    /*End se pkd, malloc is used to create the space storage dynamically. Ab since humme ek hi stack banana hai, so
    sizeof k aage koi number nahi. Size kiski? Struct stack ki. Aur sp isi dynamic allocation ka address store karega 
    so hum ab by arrow, -> ka use kar sakte hai*/
    int i = 0; //Track Infix traversal
    int j = 0; //Tack postfix addition

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i])) {
        postfix[j] = infix[i];
        i++;
        j++;}

        else {
            if (precedence (infix[i]) > precedence(stackTop(sp))){
                push (sp, infix[i]);
                i++;
            }
            else {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!empty_check(sp)) {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0'; 
    return postfix;
}

int main ()
{
    char *infix = "x-y/z+k*d";
    cout<<"Postfix is: "<<intopo(infix);
    return 0;
}