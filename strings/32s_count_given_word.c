// program to count given word
#include <stdio.h>
#define MAX_LEN 100
int count_word(char str[], char word[]);
int main()
{
    char str[MAX_LEN];
    char word[MAX_LEN];
    int count;

    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);

    printf("Enter the word to count: ");
    scanf("%s", word);

    count = count_word(str, word);

    printf("'%s' appears %d times in the string.\n", word, count);

    return 0;
}

int count_word(char str[], char word[])
{
    int count = 0;
    int str_len = 0;
    int word_len = 0;

    while (str[str_len] != '\0') {
        str_len++;
    }

    while (word[word_len] != '\0') {
        word_len++;
    }

    for (int i = 0; i <= str_len - word_len; i++) {

        int match = 1;
        for (int j = 0; j < word_len; j++) {
            if (str[i+j] != word[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    return count;
}






















