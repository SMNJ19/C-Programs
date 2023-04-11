#include<stdio.h>
int main()
{
int arr1[10],arr2[10],i,j,repeated;
for(i=0;i<3;i++)
{
printf("enter array 1:\n");
scanf("%d",&arr1[i]);
}
for(j=0;j<3;j++)
{
printf("enter array 2:\n");
scanf("%d",&arr2[j]);
}

for(i=0;i<3;i++)
{
repeated = 0;

for(j=0;j<3;j++)
{
if(arr1[i] == arr2[j])
{
repeated =1;
break;
}
}

if(!repeated)
{

printf("%d", arr2[i]);
}
}
return 0;
}
