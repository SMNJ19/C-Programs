#include<stdio.h>
#include<string.h>

int main()
{
char str[100];
int i,j,k,len=0;

printf("entrer string :\n");
gets(str);

for(i=0;str[i] !='\0';i++)
{
len++;
}

for(i=0;i<len;i++)
{
for(j=i+1;j<len;)
{
if(str[j] == str[i])
{
for(k=j;k<len;k++){

str[k] = str[k+1];
}
len--;

}
else{
j++;
}

}
}
printf("%s", str);
}
/*#include <stdio.h>
 #include <string.h>

int main()
{
    char c[150];
    int i,j=0,n,t=0;
    printf("Enter a string : ");
    gets(c);
    printf("non reapeating characters in string:");

    for(i=0;c[i];i++ )
    {
    	t=0;
     	for(j=0;c[j];j++)
        {
        	if(c[i]==c[j])
        	      t++;
        	if(t>1)  
			break;    
        }
        if(t==1)
        {
          printf("%c  ",c[i]);
		}
        
    }
     
    
    return 0;
}*/
