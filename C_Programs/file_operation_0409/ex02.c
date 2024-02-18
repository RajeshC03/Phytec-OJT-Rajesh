#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    // Attempt to create a new file "output.txt" in write-only mode.
    int fileDescriptor = open("output.txt", O_WRONLY | O_CREAT | O_EXCL, 0666);

    // Check if the file was created successfully.
    if (fileDescriptor == -1) {
        perror("Error creating the file");
        return 1;
    }

    char input[1024];
    
    printf("Enter a string to write to the file (Ctrl+D to finish):\n");

    // Read input from the user and write it to the file.
    while (fgets(input, sizeof(input), stdin) != NULL) {
        size_t inputLength = strlen(input);

        // Write the input string to the file.
        ssize_t bytesWritten = write(fileDescriptor, input, inputLength);

        // Check for errors during writing.
        if (bytesWritten == -1) {
            perror("Error writing to the file");
            close(fileDescriptor);
            return 1;
        }
    }

    // Close the file.
    if (close(fileDescriptor) == -1) {
        perror("Error closing the file");
        return 1;
    }

    printf("Data has been written to 'output.txt'.\n");

    return 0;
}

