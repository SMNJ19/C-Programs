// count number of occurance of aparticular word
#include<stdio.h>
#include<string.h>
int main()
{
char str1[100];
int length = 0,count=0,i;
printf("enter string");
//scanf("%s", &str1);
gets(str1);
/*for(i=0;str1[i]!='\0';i++)
{
length ++;
}*/
for(i=0;str1[i]!='\0';i++)
{
if(str1[i] == 'a')
{
count++;
}
}
printf("%d", count);
}
