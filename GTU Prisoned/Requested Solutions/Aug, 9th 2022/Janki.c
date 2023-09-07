#include<stdio.h>
void main()
{
    int a[100],i,e,m;
printf("Enter the value of m");
scanf("%d",&m);
printf("Enter the elements");
for(i=0;i<=m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element you want to delete");
scanf("%d",&e);
if(e >= m+1)
printf("Deletion is not possible");
else
{
for(i = e-1;i<m-1;i++)
{
a[i] = a[i+1];
}
for(i=0;i<=m;i++)
{
printf("%d\n",a[i]);
}
}
}