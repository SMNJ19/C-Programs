#include<stdio.h>
int main()
{
int arr[5],i,n=5;
for(i=0;i<n;i++)
{
printf("enter array");
scanf("%d",&arr[i]);
}
//int k=n;
for(i=0;i<n/2;i++)
{
int temp = arr[i];

arr[i] =arr[n-i-1];
arr[n-i-1] = temp;
}
 for( i=0;i<n;i++)
{
//printf("enter array after deleting");
printf("array after reversing :%d\n",arr[i]);
}}