#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, i, j, k, count = 0;

    // Input array size and elements
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for repeated elements
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) { // Found repeated element
                int is_repeated = 0;
                for (k = 0; k < count; k++) {
                    if (arr[j] == arr[n+k]) { // Element already added to repeated element list
                        is_repeated = 1;
                        break;
                    }
                }
                if (!is_repeated) { // Element not yet added to repeated element list
                    arr[n+count] = arr[j];
                    count++;
                }
            }
        }
    }

    // Print original array with repeated elements removed
    printf("\nArray with repeated elements removed:\n");
    for (i = 0; i < n; i++) {
        int is_repeated = 0;
        for (j = 0; j < count; j++) {
            if (arr[i] == arr[n+j]) { // Element is repeated
                is_repeated = 1;
                break;
            }
        }
        if (!is_repeated) {
            printf("%d ", arr[i]);
        }
    }

    // Print repeated elements at the end
    printf("\nRepeated elements:");
    for (i = 0; i < count; i++) {
        printf(" %d", arr[n+i]);
    }

    return 0;
}