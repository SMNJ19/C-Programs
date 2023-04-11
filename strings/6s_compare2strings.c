#include<stdio.h>
int main()
{
char str1[50],str2[50];
int length,i;
printf("enter string1");
//scanf("%s", str1);
gets(str1);
printf("enter string2");
//scanf("%s", str2);
gets(str2);
for(i=0;str1[i] && str2[i] != '\0';i++)
{

if(str1[i] != str2[i])
{
printf("not same");
break;
}
else
printf("same");
}
return 0;
}
