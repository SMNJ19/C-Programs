//if substring is presnt or not
#include<stdio.h>
int main()
{
int i,j,flag;
char string[100],substring[20];
printf("enter string");
gets(string);
printf("enter substring");
gets(substring);
for(i=0;string[i]!='\0';i++)
{
	if(string[i] = substring[0]){
	flag=1;
	}
   for(j=0;substring[j]!='\0';j++)
   {
	if(string[i+j] != substring[j])
	{
	flag = 0;
	break;
	}
   }
	if(flag == 1)
	{
	break;
	}
}

if(flag ==  1)
{
printf("%s is substring of %s",substring,string);
}else{
printf("%s is not a substring of %s",substring,string);
}
return 0;
}