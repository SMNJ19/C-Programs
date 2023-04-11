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
int pos=5;
int number = 55;
n++;

for(i=n-1;i>=pos;i--)
{
arr[i] = arr[i-1];
}
arr[pos-1] = number;
for(i=0;i<n;i++)
{
printf("array %d\n",arr[i]);
}
}
