/*Binary Tree Representation using Linked Representation*/
#include <iostream>
#include <stdio.h>
using namespace std;

struct node {
    int data;
    struct node * lepht;
    struct node * r8;
};

struct node * createNode (int data) {
    struct node * x = (struct node *) malloc (sizeof(struct node));
    x->data = data;
    x->lepht = NULL;
    x->r8 = NULL;
    cout<<"Node has been created of value "<<data<<endl;
    return x;
}

int main () {

    struct node * p = createNode(118);
    struct node *p1 = createNode(32);
    struct node *p2 = createNode(214);

    return 0;
}