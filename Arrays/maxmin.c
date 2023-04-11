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

for(i=0;i<n-1;i=i+2)
{
int temp = arr[i];
arr[i] = arr[i+1];
arr[i+1] = temp;
}

for(i=0;i<n;i++)
{
printf("array %d\n",arr[i]);
}
}
