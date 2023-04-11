#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int i,j,str1_len=0,str2_len=0,k;
printf("enter str1\n");
gets(str1);
printf("enter str2 \n");
gets(str2);

for(i=0;str2[i]!='\0';i++)
{
k=0;
for(j=0;str1[j]!='\0';j++)
{

if(str1[j] == str2[i])
{
//str2[j] =str2[j+1];
k=1;
break;
}

}


if(k==0){
printf("%c",str2[i]);
}
}
return 0;
}

