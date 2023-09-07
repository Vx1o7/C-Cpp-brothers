#include <iostream>
#include <stdlib.h>

using namespace std;

struct queue {
    int size;
    int front;
    int rear;
    int *arr;
};

int empty_check (struct queue *h)
{
    if (h->front == h->rear)
    {cout<<"Queue underflow!"<<endl;
    h->front = h->rear = -1;
    return 1;}

    else
      return 0;
}

int full_check (struct queue *h)
{
    if ((h->rear + h->front) == h->size-1)
    {cout<<"Queue overflow!"<<endl;
    return 1;}

    else
      return 0;
}

void enqueue_front (struct queue *h, int val)
{
    if (full_check(h))
    {
        cout<<"This queue is full, remove some elements first."<<endl;
    }
    else {
        h->front--;
        h->arr[h->front] = val;
        cout<<"The value "<<val<<" has been entered in the queue number"<<h->rear<<endl;
    }
}

void enqueue_rear (struct queue *h, int val)
{
    if (full_check(h))
    {
        cout<<"This queue is full, remove some elements first."<<endl;
    }
    else {
        h->rear++;
        h->arr[h->rear] = val;
        cout<<"The value "<<val<<" has been entered in the queue number"<<h->rear<<endl;
    }
}

int dequeue_front (struct queue *h)
{
    int a = -1;
    if (empty_check(h))
    {
        cout<<"This queue is already empty, try to fill it next time!"<<endl;
    }
    else {
        
        h->front++;
        a= h->arr[h->front];
        cout<<"The value "<<h->arr[h->front]<<" has been removed from the queue"<<endl;
    }
    return a;
}
int dequeue_rear (struct queue *h)
{
    int a = -1;
    if (empty_check(h))
    {
        cout<<"This queue is already empty, try to fill it next time!"<<endl;
    }
    else {
        
        h->rear--;
        a= h->arr[h->rear];
        cout<<"The value "<<h->arr[h->front]<<" has been removed from the queue"<<endl;
    }
    return a;
}

int main () {
    struct queue q;
    q.size = 4;
    q.front = q.rear = -1;
    q.arr = (int *) malloc ((q.size)*sizeof (int));
    
    enqueue_rear (&q, 12);
    enqueue_front (&q, 18);
    enqueue_rear (&q, 21);

    dequeue_front(&q);
    return 0;
}