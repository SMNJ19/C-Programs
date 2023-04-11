#include <stdio.h>
#include<string.h>
void remove_word(char *str, const char *word) {
    int i, j, k, n, m;
    n = strlen(str);
    m = strlen(word);
    for (i = 0; i <= n - m; i++) {
        k = i;
        for (j = 0; j < m; j++) {
            if (*(str + k) == *(word + j)) {
                k++;
            } else {
                break;
            }
        }
        if (j == m) {
            for (j = i; j <= n - m; j++) {
                *(str + j) = *(str + j + m);
            }
            *(str + j) = '\0';
            n = n - m;
            i--;
        }
    }
}
int main() {
    char str[100], word[20];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter a word to remove: ");
    scanf("%s", word);
    remove_word(str, word);
    printf("String after removing the word: %s", str);
    return 0;
}