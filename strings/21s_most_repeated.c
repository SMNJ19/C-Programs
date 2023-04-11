#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char str[100];
int i,j,k,len=0;
char  character;
printf("entrer string :\n");
gets(str);
int n = strlen(str);
int count=1,count1=0;
//char least=str[0];
for(i=0;i<n;i++)
{
count =1;
for(j=i+1;j<n;j++)
{
if(str[i] == str[j])
{
count=count+1;
}
}

if(count>count1)
{
count1= count;
character = str[i];
}
}
printf("%c", character);
}