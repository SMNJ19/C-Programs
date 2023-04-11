/*#include<stdio.h>
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
for(int i =0;str[i] <length;i++)
{
if(str[i] != str[length-i-1])
{
printf("string is not pallindrome");
}
else{
printf("string is pallin");
}
}
}*/
#include<stdio.h>
int is_pallindrome(char *str)
{
int length=0;
for(int i=0;str[i]!='\0';i++)
{
length++;
}
char *end = length+str-1;
while(end>str)
{
if(*str++!=*end--)
return 1;
else 
return 0;
}
} 

int main()
{
char str[50];
int length;
printf("enter string");
//scanf("%s", str);
gets(str);

printf("%d\n",length);

if(is_pallindrome(str))
printf("not apallindrome");
else
printf("apallindrome");
return 0;
}


