#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void traverse_head (struct node *head) {
    struct node *curr = head;
    cout<<"Traversing at the beginning"<<endl;
    while (curr->next!=NULL)
    {
        cout<<"The Elements are: "<<curr->data<<endl;
        curr = curr->next;
    }
    cout<<"The Elements are: "<<curr->data<<endl;

}

void traverse_last (struct node *last) {
    struct node *curr = last;
    cout<<"Traversing at the ending"<<endl;
    while (curr->prev!=NULL)
    {
        cout<<"The Elements are: "<<curr->data<<endl;
        curr = curr->prev;
    }
    cout<<"The Elements are: "<<curr->data<<endl;

}

int main ()
{
    struct node * first = (struct node *) malloc (sizeof (struct node));
    struct node * second = (struct node *) malloc (sizeof (struct node));
    struct node * third = (struct node *) malloc (sizeof (struct node));
    struct node * forth = (struct node *) malloc (sizeof (struct node));

    first->data = 45;
    first->next = second;
    first->prev = NULL;

    second->data = 32;
    second->next = third;
    second->prev = first;

    third->data = 69;
    third->next = forth;
    third->prev = second;

    forth->data = 420;
    forth->prev = third;
    forth->next = NULL;
    traverse_head (first);
    traverse_last (forth);

    return 0;
}