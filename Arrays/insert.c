#include<stdio.h>
int main()
{
int arr[10];
int n,i,pos,value = 55;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter array :\n");
scanf("%d", &arr[i]);

}
n++;
printf("enter position");
scanf("%d", &pos);
for(i=n-1;i>=pos;i--)
{
arr[i] = arr[i - 1];
}
arr[pos-1] = value;
for(i=0;i<n;i++)
{
//printf("array is:\n");
printf("array is %d\n", arr[i]);
}
}
