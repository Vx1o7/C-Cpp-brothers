/*Singly Linked List, Insertion Performing
Code is Supplied by Code With Harry*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    struct node * next;
};

// Traverse Function
void linkedlisttraverse (struct node *haha) 
{
    while (haha!=NULL)
    {
        cout<<"Element Has the number of : "<<haha->data<<endl;
        haha = haha->next;
    }
    
}


// Insertion Case I: Insert at the beginning
struct node * insert_beginning (struct node *lol, int jao)
{
    struct node * newnd = (struct node*) malloc (sizeof (struct node));
    newnd->next = lol;
    newnd->data = jao;
    cout<<endl<<jao<<" has been added in the list at the beginning"<<endl;
    return newnd;
}

// Insertion Case II: Insert at the Middle
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

// Insertion Case iII: Insert at the end
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

// Deletion Case I: Delete at the beginning
struct node *delete_begin (struct node *imp)
{
    struct node *newnd = imp;
    imp = imp->next;
    cout<<"Value "<<newnd->data<<" has been deleted at the beginning"<<endl;
    free (newnd);
    return imp;
}

// Deletion Case II: Delete at the middle
struct node * delete_index (struct node *imp, int index)
{
    struct node *p = imp;
    int i =0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    cout<<"Value "<<q->data<<" has been deleted at the given index"<<endl;
    free(q);
    return imp;
}

// Deletion Case III: Delete at the end
struct node * delete_end (struct node *imp)
{
    struct node *p = imp;
    struct node *q = imp->next;
    while (q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    cout<<"Value "<<q->data<<" has been deleted at the end"<<endl;
    free(q);
    return imp;
}

// Deletion Case IV: Delete at the end
struct node * delete_value (struct node *imp, int val)
{
    struct node *p = imp;
    struct node *q = imp->next;
    while (q->data!=val || q->next == NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == val) {
        cout<<"Value has been founded"<<endl;
        p->next = q->next;
        cout<<"Value "<<q->data<<" has been deleted"<<endl;
        free(q);
    }
    else {
        cout<<"You've reached to end of list, try again"<<endl;
    }
    
    return imp;
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

    asset = delete_begin(asset);
    linkedlisttraverse(asset);

    asset = delete_index(asset, 3);
    linkedlisttraverse(asset);

    asset = delete_end(asset);
    linkedlisttraverse(asset);

    asset = delete_value(asset, 22);
    linkedlisttraverse(asset);

    return 0;
}