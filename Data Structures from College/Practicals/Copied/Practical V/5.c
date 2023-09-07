#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int front = -1,rear = -1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
void main()
{
    printf("Varun Gaur, 210401017077/ 21beceg102\n");
    int option, val;
    do
    {
        printf("\n 1. Insert an element");
        printf("\n 2. Delete an element");
        printf("\n 3. Peek");
        printf("\n 4. Display the queue");
        printf("\n 5. EXIT");
        printf("\n \n Enter your option: ");
        scanf("%d",&option);
switch(option)
{
    case 1:
    insert();
    break;
    
    case 2:
    val= delete_element();
    printf("\n The number that was deleted is : %d",val);
    break;
    
    case 3:
    val=peek();
    printf("\n The first value in the queue is: %d",val);
    break;
    
    case 4:
    display();
    break;
}
}
while(option != 5);
   getch();
   return;
}
void insert()
{
    int num;
    printf(" \n Enter the number to be inserted in the queue : ");
    scanf("%d", &num);
    if(rear == MAX-1)
    printf("\n OVERFLOW");
    
    if (front == -1 && rear == -1)
    front = rear=0;
    
    else
    rear++;
    queue[rear] = num;
}
int delete_element()
{
    int val;
    if(front == -1 || front>rear)
    {
        printf("\n UNDERFLOW");
        return -1;
    }
    else
    {
        front++;
        val = queue[front];
        return val;
    }
}
int peek()
{
    return queue[front];
}
void display()
{ 
    int i;
    printf("\n");
    for(i = front; i<=rear;i++)
    printf("\t %d",queue[i]);
}
