/*Singly Linked List, Insertion Performing
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

struct node * insert_beginning (struct node *lol, int jao)
{
    struct node * newnd = (struct node*) malloc (sizeof (struct node));
    newnd->next = lol;
    newnd->data = jao;
    cout<<endl<<jao<<" has been added in the list at the beginning"<<endl;
    return newnd;
}

struct node * insert_index (struct node *kya, int data, int index)
{
    struct node * newnd = (struct node*) malloc (sizeof (struct node));
    struct node *p = kya;
    int i = 0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    newnd->next = p->next;
    p->next = newnd;
    newnd->data = data;
    cout<<endl<<data<<" has been added at the index "<<index<<endl;
    return kya;
}

struct node * insert_end (struct node *kya, int data)
{
    struct node * newnd = (struct node*) malloc (sizeof (struct node));
    struct node *p = kya
    ;
    int i = 0;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = newnd;
    newnd->next = NULL;
    newnd->data = data;
    cout<<endl<<data<<" has been added at the end"<<endl;
    return kya;
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
    asset = insert_beginning(asset, 93);
    linkedlisttraverse(asset);

    asset = insert_index(asset, 42, 3);
    linkedlisttraverse(asset);

    asset = insert_end(asset, 15);
    linkedlisttraverse(asset);


    return 0;
}