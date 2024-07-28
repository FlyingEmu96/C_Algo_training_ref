#include <stdio.h>
#include <stdlib.h>

int main() {
    // Part 1: File Operations - Opening and Writing to a File

    // Declare a file pointer
    FILE *filePtr;

    // Open a file in write mode ("w")
    filePtr = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Failed to open the file for writing.\n");
        return 1;
    }

    // Write data to the file
    fprintf(filePtr, "Hello, World!\n");
    fprintf(filePtr, "This is a file handling example in C.\n");

    // Close the file
    fclose(filePtr);
    printf("Data written to the file successfully.\n");

    // Part 2: File Operations - Reading from a File

    // Open the file in read mode ("r")
    filePtr = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Failed to open the file for reading.\n");
        return 1;
    }

    // Read and print data from the file
    char buffer[100];
    printf("\nData read from the file:\n");
    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(filePtr);

    // Part 3: File Operations - Appending to a File

    // Open the file in append mode ("a")
    filePtr = fopen("example.txt", "a");

    // Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Failed to open the file for appending.\n");
        return 1;
    }

    // Append data to the file
    fprintf(filePtr, "Appending a new line to the file.\n");

    // Close the file
    fclose(filePtr);
    printf("\nData appended to the file successfully.\n");

    // Part 4: File Operations - Binary File Writing and Reading

    // Open a binary file in write mode ("wb")
    filePtr = fopen("example.bin", "wb");

    // Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Failed to open the binary file for writing.\n");
        return 1;
    }

    // Write binary data to the file
    int numbers[] = {1, 2, 3, 4, 5};
    fwrite(numbers, sizeof(int), 5, filePtr);

    // Close the binary file
    fclose(filePtr);
    printf("\nBinary data written to the file successfully.\n");

    // Open the binary file in read mode ("rb")
    filePtr = fopen("example.bin", "rb");

    // Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Failed to open the binary file for reading.\n");
        return 1;
    }

    // Read binary data from the file
    int readNumbers[5];
    fread(readNumbers, sizeof(int), 5, filePtr);

    // Print the read binary data
    printf("\nBinary data read from the file:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", readNumbers[i]);
    }
    printf("\n");

    // Close the binary file
    fclose(filePtr);

    return 0;
}
