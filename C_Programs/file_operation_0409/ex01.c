#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Attempt to open the file "data.txt" in read-only mode.
    int fileDescriptor = open("data.txt", O_RDONLY);

    // Check if the file opened successfully.
    if (fileDescriptor == -1) {
        perror("Error opening the file");
        return 1;
    }

    // Read and display the contents of the file.
    char buffer[1024];
    ssize_t bytesRead;

    while ((bytesRead = read(fileDescriptor, buffer, sizeof(buffer))) > 0) {
        // Write the read data to the console (stdout).
        write(STDOUT_FILENO, buffer, bytesRead);
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

    return 0;
}

