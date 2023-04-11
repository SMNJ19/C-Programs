// move the given element to end
#include<stdio.h>
int main()
{
int arr[10],i,temp,n=5, pos=0,element=4;
for(i=0;i<n;i++)
{
printf("enter array");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
pos++;
if(arr[i] == element)
{
//temp = arr[i];
arr[n] = arr[i];

for(i=pos-1;i<n;i++)
{
arr[i] = arr[i+1];
}
}
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}