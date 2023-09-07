/*Singly Linked List, Traversal Performing
Code is Supplied by Code With Harry*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    struct node * next;
};

void linkedlisttraverse (struct node *haha) 
{
    while (haha!=NULL)
    {
        cout<<"Element Has the number of : "<<haha->data<<endl;
        haha = haha->next;
    }
    
}


int main ()
{
    struct node *asset;
    asset = (struct node *) malloc (sizeof(struct node));
    asset->data = 12;

    struct node *second;
    second = (struct node *) malloc (sizeof(struct node));
    asset->next = second;    
    second->data = 22;

    struct node *third;
    third = (struct node *) malloc (sizeof(struct node));
    second->next = third;
    third->data = 38;

    struct node *forth;
    forth = (struct node *) malloc (sizeof(struct node));
    third->next = forth;
    forth->data = 3;
    forth->next = NULL;
    linkedlisttraverse(asset);


    return 0;
}