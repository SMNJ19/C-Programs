//length of a string 
#include<stdio.h>
int main()
{
char str[50];
int length;
printf("enter string");
//scanf("%s", str);
gets(str);
for(int i=0;str[i]!='\0';i++)
{
length++;
}
printf("%d\n",length);
}
