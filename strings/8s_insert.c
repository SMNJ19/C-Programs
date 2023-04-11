//insert an element at that position
#include<stdio.h>
int main()
{
char str[100];
char str1;
int i,j,pos,count=0;
printf("enter string");
gets(str);
printf("enter string 1");
scanf("%c", &str1);
printf("enter position");
scanf("%d", &pos);
for(i=0;i<=pos;i++)
{
str[i]=str[i];
count++;
}
str[pos]=str1;

printf("%s",str);
return 0;
}