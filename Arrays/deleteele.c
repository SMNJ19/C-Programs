// deleting the array at a position
#include<stdio.h>
int main()
{
int arr[10],i, pos,n=5;
for(i=0;i<n;i++)
{
printf("enter array");
scanf("%d",&arr[i]);
}
pos = 1;

for(i=pos-1;i<n-1;i++)
{
arr[i] = arr[i+1];
}
n--;

for( i=0;i<n;i++)
{
//printf("enter array after deleting");
printf("enter array after deleting :%d\n",arr[i]);
}}