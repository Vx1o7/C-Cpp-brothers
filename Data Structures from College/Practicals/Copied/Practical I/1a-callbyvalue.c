#include<stdio.h>
void swap(int,int);
int main()
{
    printf("Varun Gaur, 210401017077/ 21beceg102\n");
    int a,b;
    printf("\nEnter a Value of A=");
    scanf("%d",&a);
    printf("\nEnter a Value of B=");
    scanf("%d",&b);
    swap(a,b);
    printf("\nOld Values:");
    printf("A=%d B=%d \n",a,b);
}

void swap(int p,int q)
{
    int tmp;
    tmp=p;
    p=q;
    q=tmp;
    printf("New Values After Swap:");
    printf("A=%d B=%d",p,q);
}
