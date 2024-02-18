#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Attempt to open the input file "input.txt" in read-only mode.
    int inputFileDescriptor = open("input.txt", O_RDONLY);

    // Check if the input file opened successfully.
    if (inputFileDescriptor == -1) {
        perror("Error opening the input file");
        return 1;
    }

    // Attempt to create and open the output file "output.txt" in write-only mode.
    int outputFileDescriptor = open("output.txt", O_WRONLY | O_CREAT | O_EXCL, 0666);

    // Check if the output file was created and opened successfully.
    if (outputFileDescriptor == -1) {
        perror("Error creating or opening the output file");
        close(inputFileDescriptor);
        return 1;
    }

    char character;

    // Read characters from the input file and write them to the output file.
    ssize_t bytesRead;

    while ((bytesRead = read(inputFileDescriptor, &character, sizeof(char))) > 0) {
        // Write the read character to the output file.
        ssize_t bytesWritten = write(outputFileDescriptor, &character, sizeof(char));

        // Check for errors during writing.
        if (bytesWritten == -1) {
            perror("Error writing to the output file");
            close(inputFileDescriptor);
            close(outputFileDescriptor);
            return 1;
        }
    }

    // Check for errors during reading.
    if (bytesRead == -1) {
        perror("Error reading the input file");
        close(inputFileDescriptor);
        close(outputFileDescriptor);
        return 1;
    }

    // Close both the input and output files.
    if (close(inputFileDescriptor) == -1) {
        perror("Error closing the input file");
        return 1;
    }

    if (close(outputFileDescriptor) == -1) {
        perror("Error closing the output file");
        return 1;
    }

    printf("File 'input.txt' has been copied to 'output.txt'.\n");

    return 0;
}

