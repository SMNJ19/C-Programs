#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;

printf("enter n value ");
scanf("%d", &n);
int *array = (int*)(malloc(n*sizeof(int)));
if(array == NULL)
{
printf("array is empty\n");
}
for(int i=0;i<n;i++)
{
printf("enter array \n");
scanf("%d",&array[i]);
}
for(int i=0;i<n;i++)
{
printf("array is %d\n",array[i]);
}
}