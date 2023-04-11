#include<stdio.h>
int main()
{
int i,j,length=0;
char str[100];
char target[1];
scanf("%c", &str);
peintf("enter character to move ");
scanf("%c", &target);
for(i=0;str[i]!='\0';i++)
{
length++;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]!== target)
{
str[j++] = str[i];
}
}
while(j<length)
{
str[j++] = target;
}
printf("%s",j);
}

