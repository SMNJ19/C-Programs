#include<stdio.h>
int main()
{
int i,length=0,j=0;
char str1[100];
//char str2[100];
char target;
scanf("%s", &str1);
//printf("enter character to move ");
//scanf("%s", &target);
for(i=0;str1[i]!='\0';i++)
{
length++;
}
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]!= 'i')
{
str1[j++] = str1[i];
}
}
while(j<length)
{
str1[j++] = 'i';
}
for(j=0;j<length;j++)
{
printf("%c",str1[j]);
}
}
