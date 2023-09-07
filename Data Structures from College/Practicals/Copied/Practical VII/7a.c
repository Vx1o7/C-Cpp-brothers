#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;
void initialize()
{
    head = NULL;
}
void insertAtFront(int num)
{
    struct node* newNode = (struct node*) malloc(sizeof(struct
    node)); newNode->data = num;
    newNode->next = head;
    head = newNode;
    printf("Inserted Element : %d\n",
    num);
}
void printLinkedList(struct node *nodePtr)
{
    printf("\nLinked List\n");
    while (nodePtr != NULL)
    {
        printf("%d", nodePtr->data);
        nodePtr = nodePtr->next;
        if(nodePtr != NULL)
        printf("-->");
        }
}

int main()
{
    printf("Varun Gaur, 210401017077/ 21beceg102\n");
    initialize();
    insertAtFront(2);
    insertAtFront(4);
    insertAtFront(5);
    insertAtFront(9);
    printLinkedList(head);
    return 0;
}
