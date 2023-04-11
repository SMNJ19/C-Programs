/*#include<stdio.h>
void reversestr(char *begin, char *end);
void reverse(char *str)
{
char *begin = str;

while(*str){

if(*str == ' ' || *(str+1) == '\0')
{
reversestr(begin,str);
begin = str+1;
}
str++;
}
}
void reversestr(char *begin, char *end)
{
char temp;
while(begin<end)
{
temp = *begin;
*begin++= *end;
*end-- = temp;
}
}

int main()
{
char str[1000];
printf("enter string");
gets(str);
reverse(str);
printf("%s\n",str);
}*/
#include <stdio.h>
#include <string.h>

void reverse(char *begin, char *end);

void reverseWords(char *s) {
    char *word_begin = s;

    // Traverse through all characters of the string
    while (*s) {
        // When the string encounters a space or null character,
        // reverse the word that was found and reset the word_begin pointer
        if (*s == ' ' || *(s+1) == '\0') {
            reverse(word_begin, s);
            word_begin = s + 1;
        }
        s++;
    }
}

void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = 0; // Remove the newline character from the string

    reverseWords(s);
    printf("Reversed string: %s\n", s);

    return 0;
}
