//decending order
#include<stdio.h>
int main()
{
int arr[10],n=5,temp,i,j;
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}}
for(i=0;i<n;i++)
{
printf("%d", arr[i]);
}}