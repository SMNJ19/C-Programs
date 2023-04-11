#include<stdio.h>
#include<string.h>
int main()
{
char str[200];
int count=0,i,temp,n;
printf("enter string");
gets(str);
count = strlen(str);

printf("enter n value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
temp = str[i];
str[i] = str[count-n];
str[count-n] = temp;
count++;
}
printf("%s",str);
}