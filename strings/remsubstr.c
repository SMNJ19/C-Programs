#include <stdio.h>
#include<string.h>
#define MAX_LEN 1000

int main() {
    char s1[MAX_LEN], s2[MAX_LEN], result[MAX_LEN];
    int i, j, k;

    printf("Enter the larger string s1: ");
    fgets(s1, MAX_LEN, stdin);
    printf("Enter the substring s2: ");
    fgets(s2, MAX_LEN, stdin);

    // Remove the newline character from the input strings
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    for (i = 0, j = 0; s1[i] != '\0';) {
        // Check if s2 is present at the current position
        for (k = 0; s1[i + k] == s2[k] && s2[k] != '\0'; k++);
        if (s2[k] == '\0') {
            // Skip the occurrence of s2 in s1
            i += k;
        } else {
            // Copy the character to the result string
            result[j] = s1[i];
            i++;
            j++;
        }
    }
    result[j] = '\0';

    printf("The modified string s1 is: %s\n", result);
    return 0;
}