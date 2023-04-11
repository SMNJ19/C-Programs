#include<stdio.h>
#include<string.h>
int iscon(char c)
{
return !(c =='a' ||c =='e' ||c =='i' ||c =='o' ||c =='u') && c>='a' && c<='z';
}
void removeCon(char *str)
{
char *p = str;
char *q = str;
while(*p)
{
if(!iscon(*p))
{
*q++ = *p;
}
p++;
}
*q = '\0';
}
int main()
{
char str[100];
printf("enter string");
gets(str);
removeCon(str);
printf("String without consonants: %s\n", str);
}