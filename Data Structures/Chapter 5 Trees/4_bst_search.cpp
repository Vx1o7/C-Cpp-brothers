/*Binary Search Tree Detect*/
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

int isBST (struct node * asset) {
    if (asset!=NULL) {
        static struct node * ptr = NULL;
        if (!isBST(asset->lepht)){
            return 0;
        }
        if (ptr!=NULL && asset->data <=ptr->data) {
            return 0;
        }
        ptr = asset;
        return isBST (asset->r8);        
    }
    else {
        return 1;
    }
}

struct node * bstsearch (struct node * root, int val) {
    if (root == NULL) {
        cout<<"Value has not been found!"<<endl;
        return NULL;
    }
    if (root->data == val) {
        cout<<"Eureka!! Value has been found!"<<endl;
    }
    else if (val > root->data) {
        return bstsearch (root->r8, val);
    }
    else {
        return bstsearch (root->lepht, val);
    }
}

int main () {

    struct node * p = createNode(118);
    struct node *p1 = createNode(32);
    struct node *p2 = createNode(214);
    struct node *p3 = createNode(6);
    struct node *p4 = createNode(39);
    struct node *p5 = createNode(320);

    p->lepht = p1;
    p->r8 = p2;
    p1->lepht = p3;
    p1->r8 = p4;
    p2->r8 = p5;

    if(isBST(p)) {
        cout<<"Given tree is a BST!"<<endl;
    }

    bstsearch(p, 39);

    return 0;
}