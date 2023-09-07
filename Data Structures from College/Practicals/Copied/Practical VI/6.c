#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 2
int r=-1,f=-1,queue[N];
void insert();
void del();
int i;
void main()
{
    printf("Varun Gaur, 210401017077/ 21beceg102\n");
    int ch;
    while(1)
    {
        printf("\n What operation would you like to do on your queue?");
        printf("\n 1. INSERT");
        printf("\n 2. DELETE");
        printf("\n 3. EXIT");
        printf("\n Enter choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert();
            break;
            
            case 2:
            del();
            break;
            
            case 3:
            exit(0);
            }
        }
    }
void insert(void)

{
    if((f==0 && r==N-1) || (f==r+1))
    {
        printf("\n Overflow");
        return;
    }
    
    else
    {
        if(f==-1)
        f=r=0;
        
        else if(r==N-1)
        r=0;
        
        else
        r=r+1;
        
        printf("\n Enter element :");
        scanf("%d",&queue[r]);
        printf("\n Elements in queue are:");
        
        if(f<=r)
        for(i=f;i<=r;i++)
        printf("%d ",queue[i]);
        
        else
        {
            for(i=f;i<=N-1;i++)
            printf("%d ",queue[i]);
            
            for(i=0;i<=r;i++)
            printf("%d ",queue[i]);
        }
    }
}
void del(void)
{
    int item;
    if(f==-1)
    {
        printf("\n Underflow");
        return;
    }
    item = queue[f];
    
    if(f==r)
    f=r=-1;
    
    else if(f==N-1)
    f=0;
    
    else
    f=f+1;
    printf("\n Elements in queue are:");
    
    if(f<=r)
    for(i=f;i<=r;i++)
    printf("%d ",queue[i]);
    
    else
    {
        for(i=f;i<=N;i++)
        printf("%d ",queue[i]);
        for(i=1;i<=r;i++)
        printf("%d ",queue[i]);
        }
    }