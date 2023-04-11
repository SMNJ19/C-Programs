#include<stdio.h>
#include<string.h>
int main()
{
char str1[10],str2[20];
int m,n;
printf("enter string\n");
gets(str1);
printf("enter string\n");
gets(str2);
printf("enter position of str1 and str2");
scanf("%d %d",&m,&n);
str1[m]= str2[n];
printf("%s",str1);
}