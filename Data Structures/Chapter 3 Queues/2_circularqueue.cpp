#include <iostream>
#include <stdlib.h>

using namespace std;

struct cirque {
    int size;
    int front;
    int rear;
    int *arr;
};

int empty_check (struct cirque *h)
{
    if (h->front == h->rear)
    {cout<<"Circular Queue underflow!"<<endl;
    h->front = h->rear = -1;
    return 1;}

    else
      return 0;
}

int full_check (struct cirque *h)
{
    if ((h->rear+1)%(h->size) == h->front)
    {cout<<"Circular Queue overflow!"<<endl;
    return 1;}

    else
      return 0;
}

void enqueue (struct cirque *h, int val)
{
    if (full_check(h))
    {
        cout<<"This circular queue is full, remove some elements first."<<endl;
    }
    else {
        h->rear = (h->rear+1)%h->size;
        h->arr[h->rear] = val;
        cout<<"The value "<<val<<" has been entered in the circular queue number "<<h->rear<<endl;
    }
}

int dequeue (struct cirque *h)
{
    int a = -1;
    if (empty_check(h))
    {
        cout<<"This circular queue is already empty, try to fill it next time!"<<endl;
    }
    else {
        
        h->front = (h->front+1)%h->size;
        a= h->arr[h->front];
        cout<<"The value "<<h->arr[h->front]<<" has been removed from the circular queue"<<endl;
    }
    return a;
}

int main () {
    struct cirque q;
    q.size = 4;
    q.front = q.rear = -1;
    q.arr = (int *) malloc ((q.size)*sizeof (int));
    
    enqueue (&q, 12);
    enqueue (&q, 18);
    enqueue (&q, 21);

    dequeue(&q);
    return 0;
}