#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Attempt to open the file "numbers.bin" in read-only mode.
    int fileDescriptor = open("numbers.bin", O_RDONLY);

    // Check if the file opened successfully.
    if (fileDescriptor == -1) {
        perror("Error opening the file");
        return 1;
    }

    int sum = 0;
    int number;

    // Read and compute the sum of integers in the file.
    ssize_t bytesRead;

    while ((bytesRead = read(fileDescriptor, &number, sizeof(int))) > 0) {
        // Add the read number to the sum.
        sum += number;
    }

    // Check for errors during reading.
    if (bytesRead == -1) {
        perror("Error reading the file");
        close(fileDescriptor);
        return 1;
    }

    // Close the file.
    if (close(fileDescriptor) == -1) {
        perror("Error closing the file");
        return 1;
    }

    printf("Sum of integers in 'numbers.bin': %d\n", sum);

    return 0;
}

