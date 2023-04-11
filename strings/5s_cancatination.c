//cancatination
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
for(i=0;str1[i]!='\0';i++)
{

}
for(int j=0 ;str2[j]!='\0';j++)
{

str1[i] = str2[j];
i++;
}
str1[i] = '\0';
printf("%s", str1);
}

