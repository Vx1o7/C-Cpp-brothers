#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};

void cir_lltravers (struct node *head) {
    struct node *curr = head;
    do
    {
        cout<<"The Element is "<<curr->data<<endl;
        curr = curr->next;
    } while (curr!=head);
}

struct node * insert_begin (struct node * head, int val) {
    struct node *ptr = (struct node * ) malloc (sizeof(struct node));
    struct node *p = head;
    do
    {
        p = p->next;
    } while (p->next!=head);
    ptr->data = val;
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    cout<<ptr->data <<" has been added in the circular linked list and considered as head also"<<endl;
    return head;
}

int main (){
    struct node *head = (struct node * ) malloc (sizeof(struct node));
    struct node *second = (struct node * ) malloc (sizeof(struct node));
    struct node *third = (struct node * ) malloc (sizeof(struct node));
    struct node *forth = (struct node * ) malloc (sizeof(struct node));

    head->data = 36;
    head->next = second;

    second->data = 48;
    second->next = third;

    third->data = 27;
    third->next = forth;

    forth->data = 8;
    forth->next = head;
    cir_lltravers (head);

    head = insert_begin (head, 69);
    cir_lltravers (head);

    return 0;
}