#include <stdio.h>

int main() {
    char string[1000];
    int i, j, len, max_len = 0, start_index = 0, end_index = 0;
    
    printf("Enter a string: ");
    gets(string);
    
    for (i = 0; string[i] != '\0'; i++) {
        // Check if the current character is a space or a null terminator
        if (string[i] == ' ' || string[i+1] == '\0') {
            // Calculate the length of the current word
            len = (string[i+1] == '\0') ? i - start_index + 1 : i - start_index;
            // Update the max_len and end_index variables if the current word is longer
            if (len > max_len) {
                max_len = len;
                end_index = i;
            }
            // Update the start_index variable to the beginning of the next word
            start_index = i + 1;
        }
    }
    
    // Print the largest word in the string
    printf("The largest word in the string is: ");
   for (i = end_index - max_len  ; i <= end_index; i++) {
        printf("%c", string[i]);
    }
    
    return 0;
}