// non repeated elements
#include<stdio.h>
int nonrepeatedarray(int arr[], int size)
{
int i,j,isrepeated,count=0,arr1[10],k=0;
for(i=0;i<size;i++)
{
isrepeated = 0;

for(j=0;j<size;j++)
{
if(i!=j && arr[i] == arr[j])
{
isrepeated = 1;
break;
}
}

if(isrepeated)
{

arr1[k]=arr[i];
k++;
count++;
}
}
for(k=0;k<count;k++)
{
if(arr1[k]==arr1[k+1])
{
arr1[k]=arr1[k+1];

}

}
for(i=0;i<count;i++)
{
printf("%d",arr1[i]);
}
}
int main()
{
int arr[] = { 1,2,3,1,3,4,5,7,7};
int size = sizeof(arr)/sizeof(arr[0]);
nonrepeatedarray(arr, size);
return 0;
}