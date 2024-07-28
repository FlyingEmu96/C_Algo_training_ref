#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Part 1: Dynamic memory allocation using malloc
    int *arr1;
    int n = 5;

    // Allocate memory for an array of 5 integers
    arr1 = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1.\n");
        return 1;
    }

    // Initialize and print the array
    for (int i = 0; i < n; i++) {
        arr1[i] = i + 1;
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    // Part 2: Dynamic memory allocation using calloc
    int *arr2;

    // Allocate memory for an array of 5 integers and initialize to 0
    arr2 = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2.\n");
        free(arr1); // Free previously allocated memory before returning
        return 1;
    }

    // Print the array initialized by calloc
    printf("\nArray initialized by calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    // Part 3: Reallocating memory using realloc
    n = 10;

    // Reallocate memory for arr1 to hold 10 integers
    arr1 = (int *)realloc(arr1, n * sizeof(int));

    // Check if memory reallocation was successful
    if (arr1 == NULL) {
        printf("Memory reallocation failed for arr1.\n");
        free(arr2); // Free previously allocated memory before returning
        return 1;
    }

    // Initialize the new elements and print the reallocated array
    for (int i = 5; i < n; i++) {
        arr1[i] = i + 1;
    }

    printf("\nArray after realloc:\n");
    for (int i = 0; i < n; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    // Part 4: Free allocated memory to prevent memory leaks
    free(arr1);
    free(arr2);

    printf("\nMemory successfully freed.\n");

    return 0;
}
