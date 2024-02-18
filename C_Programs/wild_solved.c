#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value; // Initializing the pointer with the address of 'value'

    printf("%d\n", *ptr); // This is now safe

    return 0;
}

