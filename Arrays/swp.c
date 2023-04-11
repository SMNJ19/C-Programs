#include<stdio.h>
int main()
{
int arr[5],i,index1,index2;
for(i=0;i<5;i++)
{
printf("enter array\n");
scanf("%d", &arr[i]);
}
printf("enter index1 and index 2");
scanf("%d %d",&index1,&index2);
int temp = arr[index1];
arr[index1] = arr[index2];
arr[index2] = temp;
for(i=0;i<5;i++)
{
//printf("enter array\n");
printf(" after swapping %d\n", arr[i]);
}
}