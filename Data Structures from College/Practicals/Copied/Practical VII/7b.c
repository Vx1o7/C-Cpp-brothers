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

struct node* newNode = (struct node*) malloc(sizeof(struct node)); newNode->data = num;
newNode->next = head; head = newNode;

}
void insertAtEnd(struct node* head, int num)
{

if (head == NULL)
{
printf("Error : Invalid node pointer !!!\n"); return;
}

struct node* newNode =(struct node*) malloc(sizeof(struct node)); newNode->data = num;
newNode->next = NULL;

while(head->next != NULL) head = head->next;

head->next = newNode;
}
void printLinkedList(struct node *nodePtr)
{
printf("\nLinked List\n"); while (nodePtr != NULL)
{
printf("%d", nodePtr->data); nodePtr = nodePtr->next; if(nodePtr != NULL) printf("-->");
 
}
}

int main()
{
    printf("Varun Gaur, 210401017077/ 21beceg102\n");
initialize(); insertAtFront(2); insertAtEnd(head, 10);
printf("\n\nAfter Insertion At End\n"); printLinkedList(head);
return 0;
}


