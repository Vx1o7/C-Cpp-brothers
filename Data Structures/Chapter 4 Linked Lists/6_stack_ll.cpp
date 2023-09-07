#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    struct node * next;
};

int empty_check(struct node * top)
{
    if (top == NULL){
        cout<<"Stack Underflow"<<endl;
        return 1;
    }
    else return 0;
}

int full_check (struct node *hell)
{
    struct node * p = (struct node *) malloc (sizeof(struct node));
    if (p == NULL)
    {
        cout<<"Stack Overflow"<<endl;
        return 1;
    }
    else 
    {return 0;}
}
struct node * push (struct node * top, int val){
    struct node * newnd = (struct node *) malloc (sizeof(struct node));
    if (full_check(top))
    {
        cout<<"Try to empty some values next time!"<<endl;
    }
    else {
        newnd->data = val;
        newnd->next = top;
        top = newnd;
        cout<<val<<" has been entered in the stack and has been placted to top of the stack"<<endl;
    }
    return top;
    
}

struct node * pop (struct node *top) {
    if (empty_check(top)) {
        cout<<"Try to fill the values next time!"<<endl;
    }
    else {
        struct node * destroy = top;
        top = top->next;
        int val = destroy->data;
        cout<<val<<" has been removed from the stack"<<endl;
        free(destroy);
        return top;
    }
}

int main ()
{
    struct node *top = NULL;
    top = push(top, 17);
    top = push(top, 26);
    top = push(top, 92);
    top = push(top, 33);
    top = push(top, 6);
    top = pop(top);
    top = pop(top);
    top = pop(top);

    return 0;
}