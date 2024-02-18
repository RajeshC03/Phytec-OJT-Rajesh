#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    int total = (size + 1) * (size + 2) / 2;
    for (int i = 0; i < size; i++) {
        total -= arr[i];
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, size);
    printf("Missing Number: %d\n", missingNumber);

    return 0;
}

