#include<stdio.h>
int main()
{
int i,arr1[10],arr2[10],n,j=0;
printf("n elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array\n");
scanf("%d",&arr1[i]);
}
for(i=0;i<n;i++)
{
arr2[i] = arr1[n-i-1];

}
for(i=0;i<n;i++)
{
printf("array %d\n",arr2[i]);
}
}
