#include<stdio.h>
#include<stdlib.h>
void main ()
{
    printf("Varun Gaur, 210401017077/ 21beceg102\n");
    int* ptr;
    int n, i;
    n = 5;
    printf("Enter the Number of Element : ");
    scanf("%d", &n);
    ptr = (int*) malloc (n*sizeof(int));
    if (ptr == NULL)
    {
        printf("\n Memory not allocated ");
    }
    else
    {
        printf("\nMemory Allocated Successfully");
        free(ptr);
        printf("\nMalloc memory deallocated successfully");
    }
}