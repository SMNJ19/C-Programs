C program to remove consonants using pointers
#include <stdio.h>
//#include <ctype.h>


int isConsonant(char c) {
    //c = tolower(c);
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')&&c>='a' && c<='z';
}

void removeConsonants(char* str) {
    char *p = str, *q= str ;

    while (*p) {
        if (!isConsonant(*p)) {
            *q++ = *p;
        }
        p++;
    }
    *q = '\0';
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    removeConsonants(str);
    printf("String without consonants: %s\n", str);
    return 0;
}