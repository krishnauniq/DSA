#include <stdio.h>

// Function to find the minimum and maximum elements using pointers
void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = *arr;  // Initialize min and max with the first element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);

    return 0;
}
