#include <stdio.h>

int main() {
    // Array Declaration and Initialization
    int singleArray[5] = {1, 2, 3, 4, 5}; // Declaring and initializing a 1D array

    // Printing elements of the 1D array
    for (int i = 0; i < 5; i++) {
        printf("singleArray[%d] = %d\n", i, singleArray[i]);
    }

    // Multidimensional Arrays
    // Declaring and initializing a 2D array (3 rows and 4 columns)
    int multiArray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Printing elements of the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("multiArray[%d][%d] = %d\n", i, j, multiArray[i][j]);
        }
    }

    // Declaring and initializing a 3D array (2 blocks, 3 rows, and 4 columns)
    int threeDArray[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Printing elements of the 3D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("threeDArray[%d][%d][%d] = %d\n", i, j, k, threeDArray[i][j][k]);
            }
        }
    }

    // Array and Pointer Relationship
    int *ptr = singleArray; // Pointer to the first element of the array

    // Printing elements of the array using the pointer
    for (int i = 0; i < 5; i++) {
        printf("Using pointer, singleArray[%d] = %d\n", i, *(ptr + i));
    }

    // Demonstrating that array name is a pointer
    printf("First element using array name: %d\n", singleArray[0]);
    printf("First element using pointer: %d\n", *singleArray);

    return 0; // Indicate that program ended successfully
}
