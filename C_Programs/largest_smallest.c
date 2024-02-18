#include <stdio.h>

void findLargestSmallest(int arr[], int size) {
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest Element: %d\n", largest);
    printf("Smallest Element: %d\n", smallest);
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    findLargestSmallest(arr, size);

    return 0;
}

