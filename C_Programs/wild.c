#include <stdio.h>

int main() {
    int *ptr; // It is a wild pointer, not initialized
    *ptr=10;//assigning 10
    printf("%d", *ptr); // This is undefined behavior

    return 0;
}

