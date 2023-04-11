#include<stdio.h>
int main()
{
int arr1[10],arr2[10],n=3,temp,i,j=0,temp1=0,s;

printf("enter array 1:\n");
for(i=0;i<n;i++)
{
scanf("%d", &arr1[i]);
}

printf("enter array 2:\n");
for(i=0;i<n;i++)
{
scanf("%d", &arr2[i]);
}


for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr1[i]>arr1[j])
{
int temp = arr1[i];
arr1[i] = arr1[j];
arr1[j] = temp;
}
}
}	

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr2[i]>arr2[j])
{
 temp1 = arr2[i];
arr2[i] = arr2[j];
arr2[j] = temp1;
}
}
} 

s=n+n;

for(i=n,j=0;i<s;i++)
{
arr1[i] = arr2[j];
j++;
}


for(i=0;i<s;i++)
{
printf("%d",arr1[i]);
}
}
