//largest and second largest

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
int max1 = arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max1)
{
max1 = arr[i];
}
}
int max2 = arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max2 && arr[i]<max1)
{
max2 = arr[i];
}}

printf("%d %d", max1,max2);
}


