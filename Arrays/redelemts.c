#include<stdio.h>
int main()
{
int i,arr[10],n;
printf("n elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array\n");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("array %d\n",arr[i]);
}
}
