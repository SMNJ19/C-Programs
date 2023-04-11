	#include <stdio.h>

void findNonRepeatedArrays(int arr[], int size) {
    int i, j, isRepeated;

    // Loop through each element of the array
    for (i = 0; i < size; i++) {
        isRepeated = 0;

        // Check if the current element is repeated
        for (j = 0; j < size; j++) {
            if ( i != j && arr[i] == arr[j]) {
                isRepeated = 1;
                break;
            }
        }

        // Print the element if it is not repeated
        if (!isRepeated) {
            printf("%d ", arr[i]);
        }
    }
}//i != j &&

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Non-repeated arrays: ");
    findNonRepeatedArrays(arr, size);

    return 0;
}
