// Maximum and minimum again max and min....

#include <stdio.h>

void max_min_array(int arr[], int n) {
    int i, j, max_index, min_index, temp;

    // Iterate over the array
    for (i = 0; i < n; i += 2) {
        // Find the index of the maximum element in the remaining array
        max_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }

        // Swap the maximum element with the current element
        temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;

        // Find the index of the minimum element in the remaining array
        min_index = i + 1;
        for (j = i + 2; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the minimum element with the current element
        temp = arr[i + 1];
        arr[i + 1] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int arr[] = {3, 8, 2, 5, 1, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    max_min_array(arr, n);

    printf("Rearranged array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}