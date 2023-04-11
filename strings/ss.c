#include<stdio.h>
int main()
{
char str[50];
int count=0,i,j,freq;
printf("enter string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
count++;
}
for(i=0;i<count;i++)
{
freq=1;
for(j= i+1;j<count;j++)
{
if(str[i] == str[j])
{
freq++;
str[j] = '0';
}
}
if(str[i]!='0'){
printf("%c %d\n", str[i],freq);
}
}
return 0;
}
