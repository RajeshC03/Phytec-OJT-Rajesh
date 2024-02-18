#include <stdio.h>

void rotateArray(int arr[], int size, int steps) {
    steps = steps % size;
    int temp[size];

    for (int i = 0; i < size; i++) {
        temp[(i + steps) % size] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int steps = 2;

    rotateArray(arr, size, steps);

    printf("Rotated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

