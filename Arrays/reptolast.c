#include<stdio.h>
void mov_all_last(int arr[], int size, int num)
{
int i,n=5,j=0;
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]!=arr[j])
{
arr[j++]=arr[i];
}
}}
while(j<size)
{
arr[j++] = num;
}
}
int main()
{
int i,arr[10],num = 5,n;
printf("n elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array\n");
scanf("%d",&arr[i]);
}
int size = sizeof(arr)/sizeof(arr[0]);
mov_all_last(arr,size,num);
for(i=0;i<n;i++)
{
printf("array %d\n",arr[i]);
//scanf("%d",&arr[i]);
}
return 0;
}

